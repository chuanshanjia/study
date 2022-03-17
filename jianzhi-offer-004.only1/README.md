# bazel工程构件

[官方文档](https://docs.bazel.build/versions/5.0.0/tutorial/cpp.html)

#  运行方式

```bash
# 编译
 bazel build  //example/code:main

#  编译可执行文件
 bazel build  //example/code:main_bin
# 运行
./bazel-bin/example/code/main_bin

# 单测
 bazel test //example/code:main_test
 # 执行
  bazel test  //example/code:main_test  --test_output=all  --test_arg=--gtest_filter=MainTest.get_greet
```