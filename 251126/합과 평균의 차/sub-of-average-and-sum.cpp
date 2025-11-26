#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int total = a + b + c;
    int avg = total / 3;
    int ans = total - avg;
    cout << total << endl << avg << endl << ans;
    return 0;
}