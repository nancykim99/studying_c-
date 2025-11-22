#include <iostream>
using namespace std;

int main() {
    string s, t;
    string temp;
    temp = s;
    s = t;
    t = temp;
    cout << s << endl << t;
    return 0;
}