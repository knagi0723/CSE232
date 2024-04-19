#include <iostream>
using std::string;


int main() {
  string name1;
  std::cin>>name1;

  int age1;
  std::cin>>age1;

  string name2;
  std::cin>>name2;

  int age2;
  std::cin>>age2;
  
  int f_age;
  f_age = age1 - age2;
  
  std::cout<<name1 <<" is "<< f_age<<" years older than "<<name2<<'.'<<std::endl;

return 0;
}