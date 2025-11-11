#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int i;
    int array[10];
    array[0] = a;
    array[1] = b;
    for (i = 2; i < 10; i++) {
        int c;
        c = (array[i-2] + array[i-1]) % 10;
        array[i] = c;
    }
    for (i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    return 0;
}