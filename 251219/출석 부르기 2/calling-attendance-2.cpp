 #include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int n;

    while (flag) { // flag가 true인 동안 반복
        cin >> n;

        if (n == 1) {
            cout << "John" << endl;
        } else if (n == 2) {
            cout << "Tom" << endl;
        } else if (n == 3) {
            cout << "Paul" << endl;
        } else if (n == 4) {
            cout << "Sam" << endl;
        } else {
            // 1, 2, 3, 4가 아닌 모든 경우
            cout << "Vacancy" << endl;
            flag = false; // 루프를 종료하기 위해 flag를 false로 변경
        }
    }

    return 0;
}