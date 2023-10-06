src_code=$1
out_dir=$2
bin=`basename $src_code .cpp`

mkdir -p $out_dir

env g++-12 -std=c++20 $src_code -o $out_dir/$bin -O3