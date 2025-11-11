#include <iostream>
using namespace std;

int main() {
    string text;
    cin >> text;
    text[1] = 'a';
    text[-2] = 'a';
    cout << text;
    return 0;
}