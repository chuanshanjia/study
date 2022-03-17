
```bash
输入：head = [1,2,3,4,5]
输出：[5,4,3,2,1]
```

```bash
# initialize and print list node test
bazel test //206-singly-linked/code:main_test --test_output=all  --test_arg=--gtest_filter=SolutionTest.initPrint

# reverse list node
 bazel test //206-singly-linked/code:main_test --test_output=all  --test_arg=--gtest_filter=SolutionTest.reverseList
```