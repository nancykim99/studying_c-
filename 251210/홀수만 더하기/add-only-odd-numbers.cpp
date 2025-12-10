#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int snum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if ((a % 2 == 1) && (a % 3 == 0)) {
            snum += a;
        }
    }
    cout << snum;
    return 0;
}