#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int area = n * n;
    cout << area << endl;
    if (area < 5) {
        cout << "tiny";
    }
    return 0;
}