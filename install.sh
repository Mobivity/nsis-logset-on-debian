#!/bin/sh
#
# This script installs the NSIS compiler on Linux
#
# Aug 3, 2004, Bas Mevissen
#

PREFIX=$1
INSTALL_PREFIX=$2
BASENAME=`basename $0`

OWNER=`id -un`
GROUP=`id -gn`

# Check command line arguments
if [ -z "${PREFIX}" ]
then
	echo "Usage: ./${BASENAME} <prefix> [install_prefix]"
	echo "       <prefix>         : absolute NSIS installation prefix"
	echo "       [install_prefix] : optional absolute install prefix for packaging"
	echo "       Run this script in the top level directory!"
	exit 1
fi

# Check if compiler was build
if [ ! -x makensis ]
then
	echo "Apparently, the source wasn't built. So doing it now"
	make -C Source 
	if [ $? != 0 ]
	then
        	echo "The build failed. Bailing out"
	        exit 2
	fi
fi

# Now we are ready to install
TARGETDIR="${PREFIX}/usr/share/NSIS"

# Create target directory
install --directory --owner=$OWNER --group=$GROUP \
 "${INSTALL_PREFIX}${TARGETDIR}"

# Now install all files in the supporting directories
DIRS="Contrib Docs Examples Include Plugins"
for x in $DIRS
do
   cp -r "$x" ${INSTALL_PREFIX}${TARGETDIR}
   find "${INSTALL_PREFIX}${TARGETDIR}"/"$x" -type f -exec chmod 644 {} \;
   find "${INSTALL_PREFIX}${TARGETDIR}"/"$x" -type d -exec chmod 755 {} \;
chown -R $OWNER.$GROUP "${INSTALL_PREFIX}${TARGETDIR}"
done

# Remove CVS directories
find "${INSTALL_PREFIX}${TARGETDIR}" -name "CVS" -exec rm -rf {} \; &>/dev/null

# Install executable
install --preserve-timestamps --owner=$OWNER --group=$GROUP --mode=755 \
 makensis "${INSTALL_PREFIX}${TARGETDIR}"

# Install config file
install --preserve-timestamps --owner=$OWNER --group=$GROUP --mode=644 \
 nsisconf.nsh "${INSTALL_PREFIX}${TARGETDIR}"

# Now create a script that runs the compiler
# This script should be installed in somewhere in the $PATH
cat >nsis_run_script <<EOF
#!/bin/sh
# This script calls the makensis compiler in ${TARGETDIR}
${TARGETDIR}/makensis \$*
EOF

install -D --mode=755 --owner=$OWNER --group=$GROUP \
 nsis_run_script "${INSTALL_PREFIX}${PREFIX}/bin/makensis"

\rm -f nsis_run_script
