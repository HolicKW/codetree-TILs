#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 입력받은 n

    // dp 배열 초기화
    int dp[1001] = {0};
    dp[0] = 1; // 아무것도 채우지 않는 경우
    dp[1] = 2; // 1 × 2를 채우는 경우
    dp[2] = 7; // 2 × 2를 채우는 경우 (3가지 방법)

    // dp 배열을 채워나갑니다.
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 1000000007;
    }

    // 결과 출력
    cout << dp[n] << endl;

    return 0;
}