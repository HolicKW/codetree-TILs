#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        // 왼쪽 별 부분 출력
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }
        // 가운데 공백 부분 출력
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }
        // 오른쪽 별 부분 출력
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}