load("@rules_cc//cc:defs.bzl", "cc_binary")
package(default_visibility = ["//visibility:public"])
filegroup(
    name = "all_files",
    srcs = glob(
        ["**/*"]
    ),
)


cc_library(
    name = "main",
    srcs = ["main.cc"],
    hdrs = ["main.h"],
    visibility = [
        "//visibility:public",
    ],
    deps = [
    ],
)

cc_binary(
    name = "main_bin",
    linkopts = [
        "-ldl",
    ],
    deps = [
      ":main",
    ],
)


cc_test(
    name = "main_test",
    srcs = ["main_test.cc"],
    deps = [
      ":main",
      "@com_google_googletest//:gtest_main",
    ],
)