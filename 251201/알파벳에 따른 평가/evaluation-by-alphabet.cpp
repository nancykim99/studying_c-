#include <iostream>
using namespace std;

int main() {
    char alp;
    cin >> alp;
    if (alp == 'S') {
        cout << "Superior";
    } else if (alp == 'A') {
        cout << "Excellent";
    } else if (alp == 'B') {
        cout << "Good";
    } else if (alp == 'C') {
        cout << "Usually";
    } else if (alp == 'D') {
        cout << "Effort";
    } else {
        cout << "Failure";
    }
    return 0;
}