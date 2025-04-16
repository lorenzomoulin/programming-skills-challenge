The following tests are designed to validate the behavior of the `ConcatRemove` function. These tests ensure that the function correctly determines whether it is possible to transform string `s` into string `t` using exactly `k` operations.

### Test Cases

1. **Test Case 1: Transforming "blablablabla" to "blablabcde" with 8 operations**
    - Input: `s = "blablablabla"`, `t = "blablabcde"`, `k = 8`
    - Expected Output: `"yes"`

2. **Test Case 2: Transforming "tab" to "tab" with 7 operations**
    - Input: `s = "tab"`, `t = "tab"`, `k = 7`
    - Expected Output: `"yes"`

3. **Test Case 3: Transforming "abc" to "def" with 6 operations**
    - Input: `s = "abc"`, `t = "def"`, `k = 6`
    - Expected Output: `"yes"`

4. **Test Case 4: Transforming "abc" to "a" with 3 operations**
    - Input: `s = "abc"`, `t = "a"`, `k = 3`
    - Expected Output: `"no"`

5. **Test Case 5: Transforming "abc" to "a" with 1 operation**
    - Input: `s = "abc"`, `t = "a"`, `k = 1`
    - Expected Output: `"no"`

6. **Test Case 6: Transforming "abc" to "a" with 4 operations**
    - Input: `s = "abc"`, `t = "a"`, `k = 4`
    - Expected Output: `"yes"`

These tests are implemented using the Google Test framework and can be executed to verify the correctness of the function.

To properly execute these tests, do the following procedure:

1 - Install CMake: sudo apt install cmake
2 - In the directory of solution.cpp, git clone https://github.com/google/googletest.git
3 - In the same directory, create CMakeLists.txt and fill with 
```
cmake_minimum_required(VERSION 3.12) # version can be different

set(GOOGLETEST_VERSION 1.15.2)

project(my_cpp_project) #name of your project

enable_testing() #to  discover tests in test explorer 

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytests solution.cpp) # add this executable

target_link_libraries(mytests PRIVATE gtest) # link google test to this executable

include(GoogleTest)
gtest_discover_tests(mytests) # discovers tests by asking the compiled test executable to enumerate its tests
```

4 - mkdir build
5 - cd build
6 - cmake ..
7 - make
8 - ./mytests