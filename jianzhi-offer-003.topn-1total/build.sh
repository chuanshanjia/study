DIR="jianzhi-offer-003.topn-1total"
# 编译
bazel build  "//"$DIR"/code:main"

#  编译可执行文件
bazel build  "//"$DIR"/code:main_bin"
 #  运行
./bazel-bin/jianzhi-offer-003.topn-1total/code/main_bin

#  单测
bazel test  "//"$DIR"/code:main_test"