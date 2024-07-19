#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101];

    // 배열 요소 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 배열을 역순으로 순회하며 짝수 인덱스의 요소 출력
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ' ';
        }
    }

    return 0;
}