#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::pow;
using std::abs;

double Fn(double x){
  return -6*(pow(x,2)) + (5*x) + 3;
}

double Integral(double x){
  return -2*(pow(x,3)) + 2.5*(pow(x,2)) + (3*x);
}

double EstimateWithTraps(double a, double b, int n){
  double len = (b-a)/n;
  double sum = 0;

  for (int i=0; i<n; i++){
    double j = a + (i*len);
    double k = a + ((i+1)*len);
    double Area = (Fn(j)+Fn(k)) * (len/2);
    sum += Area;
  }
  return sum;
}

int main() {
  double a, b, tolerance;
  int n;

  cout<<"Lower Range:"<<endl;
  cin>>a;

  cout<<"Upper Range:"<<endl;
  cin>>b;

  cout<<"Tolerance:"<<endl;
  cin>>tolerance;

  cout<<"Initial trapezoid count:"<<endl;
  cin>>n;

  while (true){
    double Area = EstimateWithTraps(a,b,n);
    double new_area = Integral(b)-Integral(a);
    double diff = abs(Area-new_area);

    cout<<std::fixed<<setprecision(4)<<endl;

    if (diff>tolerance){
      cout<<"Estimate:"<<Area<<", Number of Traps:"<<n<<", Diff:"<<diff<<endl;
    }

    else {
      cout<<"Estimate:"<<Area<<", Number of Traps:"<<n<<", Diff:"<<diff<<endl;
      break;
    }
    n *= 2;
  }
}

//https://www.scaler.com/topics/abs-in-cpp/
//https://www.programiz.com/cpp-programming/do-while-loop#:~:text=C%2B%2B%20while%20Loop&text=If%20the%20condition%20evaluates%20to,to%20false%20%2C%20the%20loop%20terminates.
  //If the condition evaluates to true, the code inside the while loop is executed.
//https://www.w3schools.com/cpp/cpp_conditions_elseif.asp#:~:text=Use%20the%20else%20if%20statement,the%20first%20condition%20is%20false%20.