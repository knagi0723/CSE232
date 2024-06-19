#include <iostream>
using namespace std;

int main() {
    int input;
    while (cin>>input) {
        if (input<0) {
            break;
        }
        int persistence=0;
        int root=input;

        if (root<10) {
            cout<<persistence<<" "<<root<<endl;
            continue;
        }

        while (root>=10) {
            int sum=0;
            int temp=root;
            while (temp>0) {
                sum+=temp%10;
                temp/=10;
            }
            root=sum;
            persistence++;
        }

        cout<<persistence<<" "<<root<<endl;
    }

    return 0;
}