#pragma once
//#include <Grid/Hadrons/Global.hpp>
#include <Grid/Eigen/unsupported/CXX11/Tensor>

namespace Grid {
namespace QCD {

#undef DELTA_F_EQ_2

template <typename FImpl>
class BaryonUtils 
{
public:
  typedef typename FImpl::ComplexField ComplexField;
  typedef typename FImpl::FermionField FermionField;
  typedef typename FImpl::PropagatorField PropagatorField;

  typedef typename FImpl::SiteSpinor vobj;
  typedef typename vobj::scalar_object sobj;
  typedef typename vobj::scalar_type scalar_type;
  typedef typename vobj::vector_type vector_type;


  static void ContractBaryons(const PropagatorField &q1,
					 const PropagatorField &q2,
					 const PropagatorField &q3,
					 ComplexField &baryon_corr);
};



template<class FImpl>
void BaryonUtils<FImpl>::ContractBaryons(const PropagatorField &q1,
						 const PropagatorField &q2,
						 const PropagatorField &q3,
						 ComplexField &baryon_corr)
{
  GridBase *grid = q1._grid;

  // C = i gamma_2 gamma_4 => C gamma_5 = - i gamma_1 gamma_3 
  Gamma GammaA(Gamma::Algebra::Identity); //Still hardcoded 1
  Gamma GammaB(Gamma::Algebra::SigmaXZ); //Still hardcoded Cg5
  Gamma g4(Gamma::Algebra::GammaT); //needed for parity P_\pm = 0.5*(1 \pm \gamma_4)

  std::vector<std::vector<int>> epsilon = {{0,1,2},{1,2,0},{2,0,1},{0,2,1},{2,1,0},{1,0,2}};
  std::vector<int> epsilon_sgn = {1,1,1,-1,-1,-1};
  char left[] = "uud";
  char right[] = "uud";
  std::vector<int> wick_contraction = {0,0,0,0,0,0};

  for (int ie=0; ie < 6 ; ie++)
    if (left[0] == right[epsilon[ie][0]] && left[1] == right[epsilon[ie][1]] && left[2] == right[epsilon[ie][2]])
      wick_contraction[ie]=1;


  int parity = 1;


  parallel_for(int ss=0;ss<grid->oSites();ss++){

    typedef typename ComplexField::vector_object vobj;

    auto D1 = q1._odata[ss];
    auto D2 = q2._odata[ss];
    auto D3 = q3._odata[ss];

    auto gD1a = GammaA * GammaA * D1;
    auto gD1b = GammaA * g4 * GammaA * D1;
    auto pD1 = 0.5* (gD1a + (double)parity * dD1b);
    auto gD3 = GammaB * D3;

    vobj result=zero;

    for (int ie_src=0; ie_src < 6 ; ie_src++){
      int a_src = epsilon[ie_src][0]; //a
      int b_src = epsilon[ie_src][1]; //b
      int c_src = epsilon[ie_src][2]; //c
      for (int ie_snk=0; ie_snk < 6 ; ie_snk++){
        int a_snk = epsilon[ie_snk][0]; //a'
        int b_snk = epsilon[ie_snk][1]; //b'
        int c_snk = epsilon[ie_snk][2]; //c'
        //This is the \delta_{123}^{123} part
	if (wick_contraction[0]){
          auto D2g = D2 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() += epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1()(gamma_src,gamma_src)(c_snk,c_src)*D2g()(alpha_snk,beta_src)(a_snk,a_src)*gD3()(alpha_snk,beta_src)(b_snk,b_src);
          }}}
  	}	  
        //This is the \delta_{123}^{231} part
	if (wick_contraction[1]){
          auto pD1g = pD1 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() += epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1g()(gamma_src,beta_src)(c_snk,a_src)*D2()(alpha_snk,beta_src)(a_snk,b_src)*gD3()(alpha_snk,gamma_src)(b_snk,c_src);
          }}}
        }	  
        //This is the \delta_{123}^{312} part
	if (wick_contraction[2]){
          auto gD3g = gD3 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() += epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1()(gamma_src,beta_src)(c_snk,b_src)*D2()(alpha_snk,gamma_src)(a_snk,c_src)*gD3g()(alpha_snk,beta_src)(b_snk,a_src);
          }}}
        }	  
        //This is the \delta_{123}^{132} part
	if (wick_contraction[3]){
          auto gD3g = gD3 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() -= epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1()(gamma_src,gamma_src)(c_snk,c_src)*D2()(alpha_snk,beta_src)(a_snk,b_src)*gD3()(alpha_snk,beta_src)(b_snk,a_src);
          }}}
        }	  
        //This is the \delta_{123}^{321} part
	if (wick_contraction[4]){
          auto D2g = D2 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() -= epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1()(gamma_src,beta_src)(c_snk,b_src)*D2g()(alpha_snk,beta_src)(a_snk,a_src)*gD3()(alpha_snk,gamma_src)(b_snk,c_src);
          }}}
        }	  
        //This is the \delta_{123}^{213} part
	if (wick_contraction[5]){
          auto pD1g = pD1 * GammaB;
	  for (int alpha_snk=0; alpha_snk<Ns; alpha_snk++){
	  for (int beta_src=0; beta_src<Ns; beta_src++){
	  for (int gamma_src=0; gamma_src<Ns; gamma_src++){
	    result()()() -= epsilon_sgn[ie_src] * epsilon_sgn[ie_snk] * pD1g()(gamma_src,beta_src)(c_snk,a_src)*D2()(alpha_snk,gamma_src)(a_snk,c_src)*gD3()(alpha_snk,beta_src)(b_snk,b_src);
          }}}
        }	  

        if (ie_src==0 && ie_snk==0){
	  baryon_corr._odata[ss] = result; 
	} else {
	  baryon_corr._odata[ss] += result; 
        }
      
      }
    }
  } //end loop over lattice sites


}



}}
