#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, const char *argv []){
    cout<<"No of params: "<<argc<<endl;
    cout<<"Program name: "<<argv[0]<<endl;
    for (int i=1; i<argc; ++i){
        cout<<"Param: "<<argv[i]<<endl;
    }
    return 0;
}