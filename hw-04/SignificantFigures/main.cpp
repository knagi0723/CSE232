#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::scientific;
using std::setprecision;
using std::setw;

int main() {
  float num;
  cin>>num;

  cout<<setw(12)<<setprecision(1)<<scientific<<num<<endl;
  cout<<setw(12)<<setprecision(3)<<scientific<<num<<endl;
  cout<<setw(12)<<setprecision(5)<<scientific<<num<<endl;

  return 0;
}

//used https://www.simplilearn.com/tutorials/cpp-tutorial/setw-cpp to understand 
//how to set field width