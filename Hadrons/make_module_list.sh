#!/usr/bin/env bash

echo 'modules_cc =\' > modules.inc
find Modules -name '*.cc' -type f -print | sort | sed 's/^/  /;$q;s/$/ \\/' >> modules.inc
echo '' >> modules.inc
echo 'modules_hpp =\' >> modules.inc
find Modules -name '*.hpp' -type f -print | sort | sed 's/^/  /;$q;s/$/ \\/' >> modules.inc
echo '' >> modules.inc
rm -f Modules.hpp
for f in `find Modules -name '*.hpp' | sort`; do
	echo "#include <Hadrons/${f}>" >> Modules.hpp
done
