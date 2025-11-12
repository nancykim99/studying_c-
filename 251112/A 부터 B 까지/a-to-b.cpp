#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << A << " ";
    while (A <= B) {
        if (A % 2 == 0) {
            A += 3;
            if (A > B) {
            break;
        }
            cout << A << " ";
        }
        if (A % 2 == 1) {
            A *= 2;
            if (A > B) {
            break;
        }
            cout << A << " ";
        }
    }
    return 0;
}