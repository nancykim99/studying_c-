#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num = (i * 2) + 1;
        for (int j = 0; j < num; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}