#include <iostream>

using namespace std;

void create_var() {
  static int counter = 0;
  counter++;
  cout << "After each call: " << counter << endl;
}

int main() {
  create_var();
  create_var();
}

// static var is created at compile time and dynamic at run time
// ref params: Type f(Type& arg1,  const Type& arg2) //arg2 is not changed by func f
// pass by ref to avoid latency, as this avoid copying func
// use inline to gain speeds