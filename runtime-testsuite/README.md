# ANTLR v4 Test Suite

This information is for running the C++ tests. The tests take a while to run (30-60 minutes).

## Requirements
Clang is required to run the C++ tests.

## Running the tests
* Setup Environment
```bash
$ export MAVEN_OPTS="-Xmx1G"
$ sudo ln -s ~/path/to/boost /usr/include/boost
```
* Generate the make file
```bash
/antlr/antlr4/runtime/Cpp/build$ export CXX=/usr/bin/clang++
/antlr/antlr4/runtime/Cpp/build$ export CC=/usr/bin/clang
/antlr/antlr4/runtime/Cpp/build$ cmake .. -DANTLR_JAR_LOCATION=$ANTLR_JAR -DWITH_DEMO=False -DBOOST_HOME=$BOOST_HOME -DWITH_LIBCXX=On
```
* Build the runtime
```bash
$ make
```
* Run the tests
```bash
$ mvn -Dtest=cpp.* test
```