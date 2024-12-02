#include <iostream>

using namespace std;

int& MultiplyBy10(int num) {
  int retval = 0;
  retval = 10 * num;
  return retval;
} // scope of var is destroyed

int main() {
  int out = MultiplyBy10(10);
  cout << "output is: " << out << endl;
  return 0;
}