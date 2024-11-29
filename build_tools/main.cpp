// pre-process -> c++ -E main.cpp > main.i
// compile -> c++ -S main.i
// assembly -> c++ -c main.s
// link -> c++ main.o -o main
#include "some_file.hpp"
#include<iostream>

int main() {
    std::cout<<"build system"<<std::endl;
    return 0;
}