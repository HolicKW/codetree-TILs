#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001] = {0};
    int cnt = 0;

    for (int t = 0; t < n; t++) {
        string a;
        int b, c;
        cin >> a >> b >> c; // 입력 처리 추가

        // i, j, k의 모든 가능한 조합 탐색
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                for (int k = 1; k <= 9; k++) {
                    // i, j, k가 서로 다른 경우만 고려
                    if (i == j || j == k || i == k) {
                        continue;
                    }

                    // 스트라이크와 볼 계산
                    int cnt1 = 0, cnt2 = 0;

                    // 첫 번째 자리 비교
                    if (a[0] - '0' == i) {
                        cnt1++;
                    } else if (a[0] - '0' == j || a[0] - '0' == k) {
                        cnt2++;
                    }

                    // 두 번째 자리 비교
                    if (a[1] - '0' == j) {
                        cnt1++;
                    } else if (a[1] - '0' == i || a[1] - '0' == k) {
                        cnt2++;
                    }

                    // 세 번째 자리 비교
                    if (a[2] - '0' == k) {
                        cnt1++;
                    } else if (a[2] - '0' == i || a[2] - '0' == j) {
                        cnt2++;
                    }

                    // 스트라이크와 볼 조건 확인
                    if (cnt1 == b && cnt2 == c) {
                        int tmp = 100*i + 10 * j + k;
                        arr[tmp]++;
                    }
                }
            }
        }
    }
    for(int i = 0; i<1000; i++){
        if(arr[i] == n){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
