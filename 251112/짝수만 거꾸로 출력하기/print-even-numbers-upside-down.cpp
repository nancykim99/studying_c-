#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array num_arr[N];
    cin >> num_arr;
    for (i = (N-1); i = 0; i--) {
        if (num_arr[i] % 2 == 0) {
            cout << num_arr[i] << " ";
        }
    }
    return 0;
}