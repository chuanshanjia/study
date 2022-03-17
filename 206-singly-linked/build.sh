DIR="206-singly-linked"
# 编译
bazel build  "//"$DIR"/code:main"

#  编译可执行文件
bazel build  "//"$DIR"/code:main_bin"
 #  运行
"./bazel-bin/"$DIR"/code/main_bin"

#  单测
bazel test  "//"$DIR"/code:main_test" --test_output=all