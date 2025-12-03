#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int fa, sa;
    char fs, ss;
    cin >> fa >> fs >> sa >> ss;
    if ((fa >= 19 && fs == 'M') || (sa >= 19 && ss == 'M')) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}