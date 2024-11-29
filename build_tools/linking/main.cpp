#include "some_file.hpp"


int main(){
    int a = 5;
    SomeFunc(a);
}

// c++ -std=c++17 -c some_file.cpp -o file.o ;
// ar rcs libtools.a file.o ; archive the lib
// c++ std=c++17 main.cpp -L . -ltools -o main ; link lib and main
// ./main ; run the binaries


/*
cmake
add_library(file some_file.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)
*/