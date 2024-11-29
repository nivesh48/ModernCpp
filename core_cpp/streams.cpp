#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream filename{"001.txt"}; //string traverse
    int num = 0;
    string ext;
    filename>>num>>ext; // left to right
    cout<<"Number is: "<<num<<endl;
    cout<<"Extension is :"<<ext<<endl;
    return 0;
}