#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt12 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cnt2++;
        }
        if (i % 3 == 0) {
            cnt3++;
        }
        if (i % 12 == 0) {
            cnt12++;
        }
    }
    cout << cnt2 << " " << cnt3 << " " << cnt12;
    return 0;
}