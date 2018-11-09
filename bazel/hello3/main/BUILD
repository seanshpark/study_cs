cc_library(
    name = "hellogreet",
    srcs = ["hellogreet.cpp"],
    hdrs = ["hellogreet.h"],
)

cc_binary(
    name = "helloworld",
    srcs = ["helloworld.cpp"],
    copts = ["-I./"],
    deps = [
        ":hellogreet",
        "//lib:hellotime",
    ],
)
