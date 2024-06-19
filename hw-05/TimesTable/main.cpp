#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    for (int i=c; i<=d; i++) {
        for (int j=a; j<=b; j++) {
            cout<<i<<"*"<<j<<"="<<i * j;
            if (j<b) {
                cout<<", ";
            }
        }
        cout<<endl;
    }
    return 0;
}
