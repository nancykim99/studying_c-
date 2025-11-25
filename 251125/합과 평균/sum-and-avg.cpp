#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double sum = a + b;
    cout << fixed;
    cout.precision(1);
    double average = sum / 2;
    cout << int(sum) << " " << average;
    return 0;
}