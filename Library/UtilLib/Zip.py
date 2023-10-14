import shutil
import sys

# ディレクトリをZip圧縮する
def Zip(dirName, outName):
    shutil.make_archive(outName, format='zip', root_dir=dirName)

args = sys.argv
Zip(args[1], args[2])
