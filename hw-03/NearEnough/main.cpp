#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int main() {
    double temp1, temp2, temp3;
    double median = 98.2;
    double range = 0.5;
    double high = median + range;
    double low = median - range;
    char F = 'F';

    cin>>temp1>>F>>temp2>>F>>temp3>>F;
    
    if (temp1>=low && temp1<=high){ 
      cout<<temp1<<F<<endl;
    }

    if (temp2>=low && temp2<=high){
      cout<<temp2<<F<<endl;
    }
    
    if (temp3>=low && temp3<=high){
       cout<<temp3<<F<<endl;
    }
    
    return 0;
}
