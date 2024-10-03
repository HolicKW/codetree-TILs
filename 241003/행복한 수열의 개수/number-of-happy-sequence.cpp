#include <iostream>
#include <vector>
using namespace std;

// 가로 방향 체크 함수
int check1(int check[][101], int n, int m) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int consecutiveCount = 1;  // 연속된 수의 카운트
        for (int j = 1; j < n; j++) {
            // 현재 값과 이전 값을 비교
            if (check[i][j] == check[i][j - 1]) {
                consecutiveCount++;  // 동일한 값이므로 카운트 증가
            } else {
                consecutiveCount = 1;  // 연속하지 않으면 카운트 초기화
            }

            // 연속된 수의 카운트가 m 이상일 때
            if (consecutiveCount >= m) {
                cnt++;  // 카운트 증가
                break;  // 한 번 조건을 만족하면 그 행에서 더 이상 검사할 필요 없음
            }
        }
    }
    return cnt;  // 결과 반환
}

// 세로 방향 체크 함수
int check2(int check[][101], int n, int m) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int consecutiveCount = 1;  // 연속된 수의 카운트
        for (int j = 1; j < n; j++) {
            // 현재 값과 이전 값을 비교
            if (check[j][i] == check[j - 1][i]) {
                consecutiveCount++;  // 동일한 값이므로 카운트 증가
            } else {
                consecutiveCount = 1;  // 연속하지 않으면 카운트 초기화
            }

            // 연속된 수의 카운트가 m 이상일 때
            if (consecutiveCount >= m) {
                cnt++;  // 카운트 증가
                break;  // 한 번 조건을 만족하면 그 열에서 더 이상 검사할 필요 없음
            }
        }
    }
    return cnt;  // 결과 반환
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[101][101];  // 최대 크기를 101로 설정

    // 배열 값 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int a = check1(arr, n, m);  // 가로 체크
    int b = check2(arr, n, m);  // 세로 체크

    cout << a + b;  // 가로와 세로에서 얻은 결과의 합 출력

    return 0;
}