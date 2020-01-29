#ifndef GRID_QCD_GAMMA_H
#define GRID_QCD_GAMMA_H

// code generated by the Mathematica notebook gamma-gen/gamma-gen.nb

#include <array>

NAMESPACE_BEGIN(Grid);

class Gamma {
  public:
    GRID_SERIALIZABLE_ENUM(Algebra, undef,
                           MinusGamma5      , 0,
                           Gamma5           , 1,
                           MinusGammaT      , 2,
                           GammaT           , 3,
                           MinusGammaTGamma5, 4,
                           GammaTGamma5     , 5,
                           MinusGammaX      , 6,
                           GammaX           , 7,
                           MinusGammaXGamma5, 8,
                           GammaXGamma5     , 9,
                           MinusGammaY      , 10,
                           GammaY           , 11,
                           MinusGammaYGamma5, 12,
                           GammaYGamma5     , 13,
                           MinusGammaZ      , 14,
                           GammaZ           , 15,
                           MinusGammaZGamma5, 16,
                           GammaZGamma5     , 17,
                           MinusIdentity    , 18,
                           Identity         , 19,
                           MinusSigmaXT     , 20,
                           SigmaXT          , 21,
                           MinusSigmaXY     , 22,
                           SigmaXY          , 23,
                           MinusSigmaXZ     , 24,
                           SigmaXZ          , 25,
                           MinusSigmaYT     , 26,
                           SigmaYT          , 27,
                           MinusSigmaYZ     , 28,
                           SigmaYZ          , 29,
                           MinusSigmaZT     , 30,
                           SigmaZT          , 31);
    static constexpr unsigned int nGamma = 32;
    static const std::array<const char *, nGamma>                name;
    static const std::array<std::array<Algebra, nGamma>, nGamma> mul;
    static const std::array<Algebra, nGamma>                     adj;
    static const std::array<const Gamma, 4>                      gmu;
    static const std::array<const Gamma, 16>                     gall;
    Algebra                                                      g;
  public:
  accelerator Gamma(Algebra initg): g(initg) {}  
};

template<class vtype>
accelerator_inline void multMinusGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(0);
  ret(1) = -rhs(1);
  ret(2) = rhs(2);
  ret(3) = rhs(3);
};

template<class vtype>
accelerator_inline void lmultMinusGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(0, i);
    ret(1, i) = -rhs(1, i);
    ret(2, i) = rhs(2, i);
    ret(3, i) = rhs(3, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 0);
    ret(i, 1) = -rhs(i, 1);
    ret(i, 2) = rhs(i, 2);
    ret(i, 3) = rhs(i, 3);
  }
};

template<class vtype>
accelerator_inline void multGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(0);
  ret(1) = rhs(1);
  ret(2) = -rhs(2);
  ret(3) = -rhs(3);
};

template<class vtype>
accelerator_inline void lmultGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(0, i);
    ret(1, i) = rhs(1, i);
    ret(2, i) = -rhs(2, i);
    ret(3, i) = -rhs(3, i);
  }
};

template<class vtype>
accelerator_inline void rmultGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 0);
    ret(i, 1) = rhs(i, 1);
    ret(i, 2) = -rhs(i, 2);
    ret(i, 3) = -rhs(i, 3);
  }
};

template<class vtype>
accelerator_inline void multMinusGammaT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(2);
  ret(1) = -rhs(3);
  ret(2) = -rhs(0);
  ret(3) = -rhs(1);
};

template<class vtype>
accelerator_inline void lmultMinusGammaT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(2, i);
    ret(1, i) = -rhs(3, i);
    ret(2, i) = -rhs(0, i);
    ret(3, i) = -rhs(1, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 2);
    ret(i, 1) = -rhs(i, 3);
    ret(i, 2) = -rhs(i, 0);
    ret(i, 3) = -rhs(i, 1);
  }
};

template<class vtype>
accelerator_inline void multGammaT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(2);
  ret(1) = rhs(3);
  ret(2) = rhs(0);
  ret(3) = rhs(1);
};

template<class vtype>
accelerator_inline void lmultGammaT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(2, i);
    ret(1, i) = rhs(3, i);
    ret(2, i) = rhs(0, i);
    ret(3, i) = rhs(1, i);
  }
};

template<class vtype>
accelerator_inline void rmultGammaT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 2);
    ret(i, 1) = rhs(i, 3);
    ret(i, 2) = rhs(i, 0);
    ret(i, 3) = rhs(i, 1);
  }
};

template<class vtype>
accelerator_inline void multMinusGammaTGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(2);
  ret(1) = rhs(3);
  ret(2) = -rhs(0);
  ret(3) = -rhs(1);
};

template<class vtype>
accelerator_inline void lmultMinusGammaTGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(2, i);
    ret(1, i) = rhs(3, i);
    ret(2, i) = -rhs(0, i);
    ret(3, i) = -rhs(1, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaTGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 2);
    ret(i, 1) = -rhs(i, 3);
    ret(i, 2) = rhs(i, 0);
    ret(i, 3) = rhs(i, 1);
  }
};

template<class vtype>
accelerator_inline void multGammaTGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(2);
  ret(1) = -rhs(3);
  ret(2) = rhs(0);
  ret(3) = rhs(1);
};

template<class vtype>
accelerator_inline void lmultGammaTGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(2, i);
    ret(1, i) = -rhs(3, i);
    ret(2, i) = rhs(0, i);
    ret(3, i) = rhs(1, i);
  }
};

template<class vtype>
accelerator_inline void rmultGammaTGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 2);
    ret(i, 1) = rhs(i, 3);
    ret(i, 2) = -rhs(i, 0);
    ret(i, 3) = -rhs(i, 1);
  }
};

template<class vtype>
accelerator_inline void multMinusGammaX(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(3));
  ret(1) = timesMinusI(rhs(2));
  ret(2) = timesI(rhs(1));
  ret(3) = timesI(rhs(0));
};

template<class vtype>
accelerator_inline void lmultMinusGammaX(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(3, i));
    ret(1, i) = timesMinusI(rhs(2, i));
    ret(2, i) = timesI(rhs(1, i));
    ret(3, i) = timesI(rhs(0, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaX(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 3));
    ret(i, 1) = timesI(rhs(i, 2));
    ret(i, 2) = timesMinusI(rhs(i, 1));
    ret(i, 3) = timesMinusI(rhs(i, 0));
  }
};

template<class vtype>
accelerator_inline void multGammaX(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(3));
  ret(1) = timesI(rhs(2));
  ret(2) = timesMinusI(rhs(1));
  ret(3) = timesMinusI(rhs(0));
};

template<class vtype>
accelerator_inline void lmultGammaX(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(3, i));
    ret(1, i) = timesI(rhs(2, i));
    ret(2, i) = timesMinusI(rhs(1, i));
    ret(3, i) = timesMinusI(rhs(0, i));
  }
};

template<class vtype>
accelerator_inline void rmultGammaX(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 3));
    ret(i, 1) = timesMinusI(rhs(i, 2));
    ret(i, 2) = timesI(rhs(i, 1));
    ret(i, 3) = timesI(rhs(i, 0));
  }
};

template<class vtype>
accelerator_inline void multMinusGammaXGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(3));
  ret(1) = timesI(rhs(2));
  ret(2) = timesI(rhs(1));
  ret(3) = timesI(rhs(0));
};

template<class vtype>
accelerator_inline void lmultMinusGammaXGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(3, i));
    ret(1, i) = timesI(rhs(2, i));
    ret(2, i) = timesI(rhs(1, i));
    ret(3, i) = timesI(rhs(0, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaXGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 3));
    ret(i, 1) = timesI(rhs(i, 2));
    ret(i, 2) = timesI(rhs(i, 1));
    ret(i, 3) = timesI(rhs(i, 0));
  }
};

template<class vtype>
accelerator_inline void multGammaXGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(3));
  ret(1) = timesMinusI(rhs(2));
  ret(2) = timesMinusI(rhs(1));
  ret(3) = timesMinusI(rhs(0));
};

template<class vtype>
accelerator_inline void lmultGammaXGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(3, i));
    ret(1, i) = timesMinusI(rhs(2, i));
    ret(2, i) = timesMinusI(rhs(1, i));
    ret(3, i) = timesMinusI(rhs(0, i));
  }
};

template<class vtype>
accelerator_inline void rmultGammaXGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 3));
    ret(i, 1) = timesMinusI(rhs(i, 2));
    ret(i, 2) = timesMinusI(rhs(i, 1));
    ret(i, 3) = timesMinusI(rhs(i, 0));
  }
};

template<class vtype>
accelerator_inline void multMinusGammaY(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(3);
  ret(1) = -rhs(2);
  ret(2) = -rhs(1);
  ret(3) = rhs(0);
};

template<class vtype>
accelerator_inline void lmultMinusGammaY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(3, i);
    ret(1, i) = -rhs(2, i);
    ret(2, i) = -rhs(1, i);
    ret(3, i) = rhs(0, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 3);
    ret(i, 1) = -rhs(i, 2);
    ret(i, 2) = -rhs(i, 1);
    ret(i, 3) = rhs(i, 0);
  }
};

template<class vtype>
accelerator_inline void multGammaY(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(3);
  ret(1) = rhs(2);
  ret(2) = rhs(1);
  ret(3) = -rhs(0);
};

template<class vtype>
accelerator_inline void lmultGammaY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(3, i);
    ret(1, i) = rhs(2, i);
    ret(2, i) = rhs(1, i);
    ret(3, i) = -rhs(0, i);
  }
};

template<class vtype>
accelerator_inline void rmultGammaY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 3);
    ret(i, 1) = rhs(i, 2);
    ret(i, 2) = rhs(i, 1);
    ret(i, 3) = -rhs(i, 0);
  }
};

template<class vtype>
accelerator_inline void multMinusGammaYGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(3);
  ret(1) = rhs(2);
  ret(2) = -rhs(1);
  ret(3) = rhs(0);
};

template<class vtype>
accelerator_inline void lmultMinusGammaYGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(3, i);
    ret(1, i) = rhs(2, i);
    ret(2, i) = -rhs(1, i);
    ret(3, i) = rhs(0, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaYGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 3);
    ret(i, 1) = -rhs(i, 2);
    ret(i, 2) = rhs(i, 1);
    ret(i, 3) = -rhs(i, 0);
  }
};

template<class vtype>
accelerator_inline void multGammaYGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(3);
  ret(1) = -rhs(2);
  ret(2) = rhs(1);
  ret(3) = -rhs(0);
};

template<class vtype>
accelerator_inline void lmultGammaYGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(3, i);
    ret(1, i) = -rhs(2, i);
    ret(2, i) = rhs(1, i);
    ret(3, i) = -rhs(0, i);
  }
};

template<class vtype>
accelerator_inline void rmultGammaYGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 3);
    ret(i, 1) = rhs(i, 2);
    ret(i, 2) = -rhs(i, 1);
    ret(i, 3) = rhs(i, 0);
  }
};

template<class vtype>
accelerator_inline void multMinusGammaZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(2));
  ret(1) = timesI(rhs(3));
  ret(2) = timesI(rhs(0));
  ret(3) = timesMinusI(rhs(1));
};

template<class vtype>
accelerator_inline void lmultMinusGammaZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(2, i));
    ret(1, i) = timesI(rhs(3, i));
    ret(2, i) = timesI(rhs(0, i));
    ret(3, i) = timesMinusI(rhs(1, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 2));
    ret(i, 1) = timesMinusI(rhs(i, 3));
    ret(i, 2) = timesMinusI(rhs(i, 0));
    ret(i, 3) = timesI(rhs(i, 1));
  }
};

template<class vtype>
accelerator_inline void multGammaZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(2));
  ret(1) = timesMinusI(rhs(3));
  ret(2) = timesMinusI(rhs(0));
  ret(3) = timesI(rhs(1));
};

template<class vtype>
accelerator_inline void lmultGammaZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(2, i));
    ret(1, i) = timesMinusI(rhs(3, i));
    ret(2, i) = timesMinusI(rhs(0, i));
    ret(3, i) = timesI(rhs(1, i));
  }
};

template<class vtype>
accelerator_inline void rmultGammaZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 2));
    ret(i, 1) = timesI(rhs(i, 3));
    ret(i, 2) = timesI(rhs(i, 0));
    ret(i, 3) = timesMinusI(rhs(i, 1));
  }
};

template<class vtype>
accelerator_inline void multMinusGammaZGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(2));
  ret(1) = timesMinusI(rhs(3));
  ret(2) = timesI(rhs(0));
  ret(3) = timesMinusI(rhs(1));
};

template<class vtype>
accelerator_inline void lmultMinusGammaZGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(2, i));
    ret(1, i) = timesMinusI(rhs(3, i));
    ret(2, i) = timesI(rhs(0, i));
    ret(3, i) = timesMinusI(rhs(1, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusGammaZGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 2));
    ret(i, 1) = timesMinusI(rhs(i, 3));
    ret(i, 2) = timesI(rhs(i, 0));
    ret(i, 3) = timesMinusI(rhs(i, 1));
  }
};

template<class vtype>
accelerator_inline void multGammaZGamma5(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(2));
  ret(1) = timesI(rhs(3));
  ret(2) = timesMinusI(rhs(0));
  ret(3) = timesI(rhs(1));
};

template<class vtype>
accelerator_inline void lmultGammaZGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(2, i));
    ret(1, i) = timesI(rhs(3, i));
    ret(2, i) = timesMinusI(rhs(0, i));
    ret(3, i) = timesI(rhs(1, i));
  }
};

template<class vtype>
accelerator_inline void rmultGammaZGamma5(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 2));
    ret(i, 1) = timesI(rhs(i, 3));
    ret(i, 2) = timesMinusI(rhs(i, 0));
    ret(i, 3) = timesI(rhs(i, 1));
  }
};

template<class vtype>
accelerator_inline void multMinusIdentity(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(0);
  ret(1) = -rhs(1);
  ret(2) = -rhs(2);
  ret(3) = -rhs(3);
};

template<class vtype>
accelerator_inline void lmultMinusIdentity(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(0, i);
    ret(1, i) = -rhs(1, i);
    ret(2, i) = -rhs(2, i);
    ret(3, i) = -rhs(3, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusIdentity(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 0);
    ret(i, 1) = -rhs(i, 1);
    ret(i, 2) = -rhs(i, 2);
    ret(i, 3) = -rhs(i, 3);
  }
};

template<class vtype>
accelerator_inline void multIdentity(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(0);
  ret(1) = rhs(1);
  ret(2) = rhs(2);
  ret(3) = rhs(3);
};

template<class vtype>
accelerator_inline void lmultIdentity(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(0, i);
    ret(1, i) = rhs(1, i);
    ret(2, i) = rhs(2, i);
    ret(3, i) = rhs(3, i);
  }
};

template<class vtype>
accelerator_inline void rmultIdentity(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 0);
    ret(i, 1) = rhs(i, 1);
    ret(i, 2) = rhs(i, 2);
    ret(i, 3) = rhs(i, 3);
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaXT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(1));
  ret(1) = timesMinusI(rhs(0));
  ret(2) = timesI(rhs(3));
  ret(3) = timesI(rhs(2));
};

template<class vtype>
accelerator_inline void lmultMinusSigmaXT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(1, i));
    ret(1, i) = timesMinusI(rhs(0, i));
    ret(2, i) = timesI(rhs(3, i));
    ret(3, i) = timesI(rhs(2, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaXT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 1));
    ret(i, 1) = timesMinusI(rhs(i, 0));
    ret(i, 2) = timesI(rhs(i, 3));
    ret(i, 3) = timesI(rhs(i, 2));
  }
};

template<class vtype>
accelerator_inline void multSigmaXT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(1));
  ret(1) = timesI(rhs(0));
  ret(2) = timesMinusI(rhs(3));
  ret(3) = timesMinusI(rhs(2));
};

template<class vtype>
accelerator_inline void lmultSigmaXT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(1, i));
    ret(1, i) = timesI(rhs(0, i));
    ret(2, i) = timesMinusI(rhs(3, i));
    ret(3, i) = timesMinusI(rhs(2, i));
  }
};

template<class vtype>
accelerator_inline void rmultSigmaXT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 1));
    ret(i, 1) = timesI(rhs(i, 0));
    ret(i, 2) = timesMinusI(rhs(i, 3));
    ret(i, 3) = timesMinusI(rhs(i, 2));
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaXY(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(0));
  ret(1) = timesMinusI(rhs(1));
  ret(2) = timesI(rhs(2));
  ret(3) = timesMinusI(rhs(3));
};

template<class vtype>
accelerator_inline void lmultMinusSigmaXY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(0, i));
    ret(1, i) = timesMinusI(rhs(1, i));
    ret(2, i) = timesI(rhs(2, i));
    ret(3, i) = timesMinusI(rhs(3, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaXY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 0));
    ret(i, 1) = timesMinusI(rhs(i, 1));
    ret(i, 2) = timesI(rhs(i, 2));
    ret(i, 3) = timesMinusI(rhs(i, 3));
  }
};

template<class vtype>
accelerator_inline void multSigmaXY(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(0));
  ret(1) = timesI(rhs(1));
  ret(2) = timesMinusI(rhs(2));
  ret(3) = timesI(rhs(3));
};

template<class vtype>
accelerator_inline void lmultSigmaXY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(0, i));
    ret(1, i) = timesI(rhs(1, i));
    ret(2, i) = timesMinusI(rhs(2, i));
    ret(3, i) = timesI(rhs(3, i));
  }
};

template<class vtype>
accelerator_inline void rmultSigmaXY(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 0));
    ret(i, 1) = timesI(rhs(i, 1));
    ret(i, 2) = timesMinusI(rhs(i, 2));
    ret(i, 3) = timesI(rhs(i, 3));
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaXZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(1);
  ret(1) = -rhs(0);
  ret(2) = rhs(3);
  ret(3) = -rhs(2);
};

template<class vtype>
accelerator_inline void lmultMinusSigmaXZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(1, i);
    ret(1, i) = -rhs(0, i);
    ret(2, i) = rhs(3, i);
    ret(3, i) = -rhs(2, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaXZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 1);
    ret(i, 1) = rhs(i, 0);
    ret(i, 2) = -rhs(i, 3);
    ret(i, 3) = rhs(i, 2);
  }
};

template<class vtype>
accelerator_inline void multSigmaXZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(1);
  ret(1) = rhs(0);
  ret(2) = -rhs(3);
  ret(3) = rhs(2);
};

template<class vtype>
accelerator_inline void lmultSigmaXZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(1, i);
    ret(1, i) = rhs(0, i);
    ret(2, i) = -rhs(3, i);
    ret(3, i) = rhs(2, i);
  }
};

template<class vtype>
accelerator_inline void rmultSigmaXZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 1);
    ret(i, 1) = -rhs(i, 0);
    ret(i, 2) = rhs(i, 3);
    ret(i, 3) = -rhs(i, 2);
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaYT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = rhs(1);
  ret(1) = -rhs(0);
  ret(2) = -rhs(3);
  ret(3) = rhs(2);
};

template<class vtype>
accelerator_inline void lmultMinusSigmaYT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = rhs(1, i);
    ret(1, i) = -rhs(0, i);
    ret(2, i) = -rhs(3, i);
    ret(3, i) = rhs(2, i);
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaYT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = -rhs(i, 1);
    ret(i, 1) = rhs(i, 0);
    ret(i, 2) = rhs(i, 3);
    ret(i, 3) = -rhs(i, 2);
  }
};

template<class vtype>
accelerator_inline void multSigmaYT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = -rhs(1);
  ret(1) = rhs(0);
  ret(2) = rhs(3);
  ret(3) = -rhs(2);
};

template<class vtype>
accelerator_inline void lmultSigmaYT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = -rhs(1, i);
    ret(1, i) = rhs(0, i);
    ret(2, i) = rhs(3, i);
    ret(3, i) = -rhs(2, i);
  }
};

template<class vtype>
accelerator_inline void rmultSigmaYT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = rhs(i, 1);
    ret(i, 1) = -rhs(i, 0);
    ret(i, 2) = -rhs(i, 3);
    ret(i, 3) = rhs(i, 2);
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaYZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(1));
  ret(1) = timesI(rhs(0));
  ret(2) = timesI(rhs(3));
  ret(3) = timesI(rhs(2));
};

template<class vtype>
accelerator_inline void lmultMinusSigmaYZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(1, i));
    ret(1, i) = timesI(rhs(0, i));
    ret(2, i) = timesI(rhs(3, i));
    ret(3, i) = timesI(rhs(2, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaYZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 1));
    ret(i, 1) = timesI(rhs(i, 0));
    ret(i, 2) = timesI(rhs(i, 3));
    ret(i, 3) = timesI(rhs(i, 2));
  }
};

template<class vtype>
accelerator_inline void multSigmaYZ(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(1));
  ret(1) = timesMinusI(rhs(0));
  ret(2) = timesMinusI(rhs(3));
  ret(3) = timesMinusI(rhs(2));
};

template<class vtype>
accelerator_inline void lmultSigmaYZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(1, i));
    ret(1, i) = timesMinusI(rhs(0, i));
    ret(2, i) = timesMinusI(rhs(3, i));
    ret(3, i) = timesMinusI(rhs(2, i));
  }
};

template<class vtype>
accelerator_inline void rmultSigmaYZ(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 1));
    ret(i, 1) = timesMinusI(rhs(i, 0));
    ret(i, 2) = timesMinusI(rhs(i, 3));
    ret(i, 3) = timesMinusI(rhs(i, 2));
  }
};

template<class vtype>
accelerator_inline void multMinusSigmaZT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesMinusI(rhs(0));
  ret(1) = timesI(rhs(1));
  ret(2) = timesI(rhs(2));
  ret(3) = timesMinusI(rhs(3));
};

template<class vtype>
accelerator_inline void lmultMinusSigmaZT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesMinusI(rhs(0, i));
    ret(1, i) = timesI(rhs(1, i));
    ret(2, i) = timesI(rhs(2, i));
    ret(3, i) = timesMinusI(rhs(3, i));
  }
};

template<class vtype>
accelerator_inline void rmultMinusSigmaZT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesMinusI(rhs(i, 0));
    ret(i, 1) = timesI(rhs(i, 1));
    ret(i, 2) = timesI(rhs(i, 2));
    ret(i, 3) = timesMinusI(rhs(i, 3));
  }
};

template<class vtype>
accelerator_inline void multSigmaZT(iVector<vtype, Ns> &ret, const iVector<vtype, Ns> &rhs)
{
  ret(0) = timesI(rhs(0));
  ret(1) = timesMinusI(rhs(1));
  ret(2) = timesMinusI(rhs(2));
  ret(3) = timesI(rhs(3));
};

template<class vtype>
accelerator_inline void lmultSigmaZT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(0, i) = timesI(rhs(0, i));
    ret(1, i) = timesMinusI(rhs(1, i));
    ret(2, i) = timesMinusI(rhs(2, i));
    ret(3, i) = timesI(rhs(3, i));
  }
};

template<class vtype>
accelerator_inline void rmultSigmaZT(iMatrix<vtype, Ns> &ret, const iMatrix<vtype, Ns> &rhs)
{
  for(unsigned int i = 0; i < Ns; ++i)
  {
    ret(i, 0) = timesI(rhs(i, 0));
    ret(i, 1) = timesMinusI(rhs(i, 1));
    ret(i, 2) = timesMinusI(rhs(i, 2));
    ret(i, 3) = timesI(rhs(i, 3));
  }
};

template<class vtype> 
accelerator_inline auto operator*(const Gamma &G, const iVector<vtype, Ns> &arg)
->typename std::enable_if<matchGridTensorIndex<iVector<vtype, Ns>, SpinorIndex>::value, iVector<vtype, Ns>>::type
{
  iVector<vtype, Ns> ret;

  switch (G.g) 
  {
  case Gamma::Algebra::MinusGamma5:
    multMinusGamma5(ret, arg); break;
  case Gamma::Algebra::Gamma5:
    multGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaT:
    multMinusGammaT(ret, arg); break;
  case Gamma::Algebra::GammaT:
    multGammaT(ret, arg); break;
  case Gamma::Algebra::MinusGammaTGamma5:
    multMinusGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::GammaTGamma5:
    multGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaX:
    multMinusGammaX(ret, arg); break;
  case Gamma::Algebra::GammaX:
    multGammaX(ret, arg); break;
  case Gamma::Algebra::MinusGammaXGamma5:
    multMinusGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::GammaXGamma5:
    multGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaY:
    multMinusGammaY(ret, arg); break;
  case Gamma::Algebra::GammaY:
    multGammaY(ret, arg); break;
  case Gamma::Algebra::MinusGammaYGamma5:
    multMinusGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::GammaYGamma5:
    multGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaZ:
    multMinusGammaZ(ret, arg); break;
  case Gamma::Algebra::GammaZ:
    multGammaZ(ret, arg); break;
  case Gamma::Algebra::MinusGammaZGamma5:
    multMinusGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::GammaZGamma5:
    multGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::MinusIdentity:
    multMinusIdentity(ret, arg); break;
  case Gamma::Algebra::Identity:
    multIdentity(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXT:
    multMinusSigmaXT(ret, arg); break;
  case Gamma::Algebra::SigmaXT:
    multSigmaXT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXY:
    multMinusSigmaXY(ret, arg); break;
  case Gamma::Algebra::SigmaXY:
    multSigmaXY(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXZ:
    multMinusSigmaXZ(ret, arg); break;
  case Gamma::Algebra::SigmaXZ:
    multSigmaXZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYT:
    multMinusSigmaYT(ret, arg); break;
  case Gamma::Algebra::SigmaYT:
    multSigmaYT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYZ:
    multMinusSigmaYZ(ret, arg); break;
  case Gamma::Algebra::SigmaYZ:
    multSigmaYZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaZT:
    multMinusSigmaZT(ret, arg); break;
  case Gamma::Algebra::SigmaZT:
    multSigmaZT(ret, arg); break;
  default: accelerator_assert(0);
  }
  
  return ret;
}

template<class vtype> 
accelerator_inline auto operator*(const Gamma &G, const iMatrix<vtype, Ns> &arg)
->typename std::enable_if<matchGridTensorIndex<iMatrix<vtype, Ns>, SpinorIndex>::value, iMatrix<vtype, Ns>>::type
{
  iMatrix<vtype, Ns> ret;

  switch (G.g) 
  {
  case Gamma::Algebra::MinusGamma5:
    lmultMinusGamma5(ret, arg); break;
  case Gamma::Algebra::Gamma5:
    lmultGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaT:
    lmultMinusGammaT(ret, arg); break;
  case Gamma::Algebra::GammaT:
    lmultGammaT(ret, arg); break;
  case Gamma::Algebra::MinusGammaTGamma5:
    lmultMinusGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::GammaTGamma5:
    lmultGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaX:
    lmultMinusGammaX(ret, arg); break;
  case Gamma::Algebra::GammaX:
    lmultGammaX(ret, arg); break;
  case Gamma::Algebra::MinusGammaXGamma5:
    lmultMinusGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::GammaXGamma5:
    lmultGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaY:
    lmultMinusGammaY(ret, arg); break;
  case Gamma::Algebra::GammaY:
    lmultGammaY(ret, arg); break;
  case Gamma::Algebra::MinusGammaYGamma5:
    lmultMinusGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::GammaYGamma5:
    lmultGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaZ:
    lmultMinusGammaZ(ret, arg); break;
  case Gamma::Algebra::GammaZ:
    lmultGammaZ(ret, arg); break;
  case Gamma::Algebra::MinusGammaZGamma5:
    lmultMinusGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::GammaZGamma5:
    lmultGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::MinusIdentity:
    lmultMinusIdentity(ret, arg); break;
  case Gamma::Algebra::Identity:
    lmultIdentity(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXT:
    lmultMinusSigmaXT(ret, arg); break;
  case Gamma::Algebra::SigmaXT:
    lmultSigmaXT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXY:
    lmultMinusSigmaXY(ret, arg); break;
  case Gamma::Algebra::SigmaXY:
    lmultSigmaXY(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXZ:
    lmultMinusSigmaXZ(ret, arg); break;
  case Gamma::Algebra::SigmaXZ:
    lmultSigmaXZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYT:
    lmultMinusSigmaYT(ret, arg); break;
  case Gamma::Algebra::SigmaYT:
    lmultSigmaYT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYZ:
    lmultMinusSigmaYZ(ret, arg); break;
  case Gamma::Algebra::SigmaYZ:
    lmultSigmaYZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaZT:
    lmultMinusSigmaZT(ret, arg); break;
  case Gamma::Algebra::SigmaZT:
    lmultSigmaZT(ret, arg); break;
  default: accelerator_assert(0);
  }
  
  return ret;
}

template<class vtype> 
accelerator_inline auto operator*(const iMatrix<vtype, Ns> &arg, const Gamma &G)
->typename std::enable_if<matchGridTensorIndex<iMatrix<vtype, Ns>, SpinorIndex>::value, iMatrix<vtype, Ns>>::type
{
  iMatrix<vtype, Ns> ret;

  switch (G.g) 
  {
  case Gamma::Algebra::MinusGamma5:
    rmultMinusGamma5(ret, arg); break;
  case Gamma::Algebra::Gamma5:
    rmultGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaT:
    rmultMinusGammaT(ret, arg); break;
  case Gamma::Algebra::GammaT:
    rmultGammaT(ret, arg); break;
  case Gamma::Algebra::MinusGammaTGamma5:
    rmultMinusGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::GammaTGamma5:
    rmultGammaTGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaX:
    rmultMinusGammaX(ret, arg); break;
  case Gamma::Algebra::GammaX:
    rmultGammaX(ret, arg); break;
  case Gamma::Algebra::MinusGammaXGamma5:
    rmultMinusGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::GammaXGamma5:
    rmultGammaXGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaY:
    rmultMinusGammaY(ret, arg); break;
  case Gamma::Algebra::GammaY:
    rmultGammaY(ret, arg); break;
  case Gamma::Algebra::MinusGammaYGamma5:
    rmultMinusGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::GammaYGamma5:
    rmultGammaYGamma5(ret, arg); break;
  case Gamma::Algebra::MinusGammaZ:
    rmultMinusGammaZ(ret, arg); break;
  case Gamma::Algebra::GammaZ:
    rmultGammaZ(ret, arg); break;
  case Gamma::Algebra::MinusGammaZGamma5:
    rmultMinusGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::GammaZGamma5:
    rmultGammaZGamma5(ret, arg); break;
  case Gamma::Algebra::MinusIdentity:
    rmultMinusIdentity(ret, arg); break;
  case Gamma::Algebra::Identity:
    rmultIdentity(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXT:
    rmultMinusSigmaXT(ret, arg); break;
  case Gamma::Algebra::SigmaXT:
    rmultSigmaXT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXY:
    rmultMinusSigmaXY(ret, arg); break;
  case Gamma::Algebra::SigmaXY:
    rmultSigmaXY(ret, arg); break;
  case Gamma::Algebra::MinusSigmaXZ:
    rmultMinusSigmaXZ(ret, arg); break;
  case Gamma::Algebra::SigmaXZ:
    rmultSigmaXZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYT:
    rmultMinusSigmaYT(ret, arg); break;
  case Gamma::Algebra::SigmaYT:
    rmultSigmaYT(ret, arg); break;
  case Gamma::Algebra::MinusSigmaYZ:
    rmultMinusSigmaYZ(ret, arg); break;
  case Gamma::Algebra::SigmaYZ:
    rmultSigmaYZ(ret, arg); break;
  case Gamma::Algebra::MinusSigmaZT:
    rmultMinusSigmaZT(ret, arg); break;
  case Gamma::Algebra::SigmaZT:
    rmultSigmaZT(ret, arg); break;
  default: accelerator_assert(0);
  }
  
  return ret;
}

NAMESPACE_END(Grid);

#endif // GRID_QCD_GAMMA_H
