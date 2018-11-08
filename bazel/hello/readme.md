### to build,
```
bazel build //main:helloworld
```

### to run
```
bazel run //main:helloworld
```

### list of binary
```
ll bazel-bin/main
```

### execute directly
```
./bazel-bin/main/helloworld
```

### dependency graph
```
bazel query --nohost_deps --noimplicit_deps 'deps(//main:helloworld)' \
--output graph
```
shows
```
digraph mygraph {
  node [shape=box];
"//main:helloworld"
"//main:helloworld" -> "//main:helloworld.cpp"
"//main:helloworld.cpp"
}
```

### reference
https://docs.bazel.build/versions/master/tutorial/cpp.html
