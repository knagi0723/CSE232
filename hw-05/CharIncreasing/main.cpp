#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    char prev = '\n';
    char curr;
    while (cin.get(curr)) {
        if (curr > prev || curr == '\n') {
            cout << curr;
        } else {
            cout << '_';
        }
        prev = curr;
    }
    return 0;
}