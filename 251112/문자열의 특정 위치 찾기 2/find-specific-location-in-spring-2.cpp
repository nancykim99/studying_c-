#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    int cnt = 0;
    string array[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (array[i][j] == a) {
                cout << array[i] << endl;
                cnt += 1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}