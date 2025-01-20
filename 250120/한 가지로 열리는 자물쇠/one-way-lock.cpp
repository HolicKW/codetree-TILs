#include <iostream>
#include <cmath> // abs 함수 사용
using namespace std;

int main() {
    int a, b, c, n;
    cin >> n;
    cin >> a >> b >> c;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                // 거리 조건을 절대값으로 확인
                if (abs(i - a) > 2 && abs(j - b) > 2 && abs(k - c) > 2) {
                    cnt++;
                }
            }
        }
    }

    // 전체 경우에서 조건을 만족하는 경우를 제외
    int result = n * n * n - cnt;
    cout << result << endl;
    return 0;
}
