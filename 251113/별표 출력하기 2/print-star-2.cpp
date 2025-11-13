#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = N; j > 0; i--) {
            cout << '*' << " ";
        }
        cout << "\n";
    }
    return 0;
}