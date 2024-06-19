#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y>>z;

    int num1 = max(max(x,y),z);
    int num2 = min(min(max(x,y), max(x,z)), max(y,z));

    cout<<num1+num2<<endl;
    
    return 0;
}