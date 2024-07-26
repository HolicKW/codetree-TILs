#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // 다이아몬드 모양을 그리기 위한 조건
            if (abs(n - 1 - i) + abs(n - 1 - j) < n) {
                // 짝수 행과 짝수 열, 혹은 홀수 행과 홀수 열인 경우에만 '*' 출력
                if ((i + j) % 2 == (n - 1) % 2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}