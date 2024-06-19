#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::dec;
using std::hex;
using std::oct;

int main() {
  int num;
  cin>>num;

  cout<<dec<<num<<endl;
  cout<<hex<<num<<endl;
  cout<<oct<<num<<endl;

  return 0;
}

//https://cplusplus.com/reference/ios/dec/