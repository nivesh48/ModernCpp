#include <iostream>
#include <string>


int main() {
    const std::string src{"some string ..."};
    std::string dest = src;
    std::cout<<src<<std::endl;
    std::cout<<dest<<std::endl;
    return 0;
}