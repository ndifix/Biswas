OutDir='out/'
TmpDir='tmp/'
LibDir='Library/'

Library=(
    'UtilLib'
    'XmlBaseLib'
    'XmlElementLib'
    'XmlFileLib'
    'PartLib'
    'DocumentLib'
    'PresentationLib'
    )

mkdir -p ${OutDir} ${TmpDir}

for lib in ${Library[*]}; do
    echo "entering "$LibDir$lib
    make -C $LibDir$lib --no-print-directory
done
