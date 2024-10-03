#include <iostream>
using namespace std;

// 가로 방향 체크 함수
int check1(int check[][101], int n, int m) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int consecutiveCount = 1;  // 연속된 수의 카운트
        for (int j = 1; j < n; j++) {
            if (check[i][j] == check[i][j - 1]) {
                consecutiveCount++;
            } else {
                consecutiveCount = 1;  // 초기화
            }

            if (consecutiveCount >= m) {
                cnt++;
                break;  // 행에서 더 이상 검사하지 않음
            }
        }
    }
    return cnt;
}

// 세로 방향 체크 함수
int check2(int check[][101], int n, int m) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int consecutiveCount = 1;  // 연속된 수의 카운트
        for (int j = 1; j < n; j++) {
            if (check[j][i] == check[j - 1][i]) {
                consecutiveCount++;
            } else {
                consecutiveCount = 1;  // 초기화
            }

            if (consecutiveCount >= m) {
                cnt++;
                break;  // 열에서 더 이상 검사하지 않음
            }
        }
    }
    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;  // n과 m 입력받기
    int arr[101][101];  // 최대 크기를 101로 설정

    // 배열 값 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int a = check1(arr, n, m);  // 가로 체크
    int b = check2(arr, n, m);  // 세로 체크

    cout << a + b;  // 결과 출력

    return 0;
}