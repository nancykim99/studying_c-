#include <iostream>
using namespace std;

int main() {
    int n;
    while (n != 25) {
        cin >> n;
        if (n == 25) {
            cout << "Good";
            break;
        }
        if (n < 25) {
            cout << "Higher" << endl;
        } else if (n > 25) {
            cout << "Lower" << endl;
        }
    }
    return 0;
}