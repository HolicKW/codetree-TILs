#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int dp[1001];
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i= 4; i<=n; i++){
        dp[i] = max(dp[i-2]+1, dp[i-3]+1);
    }
    cout << dp[n]%10007;
    return 0;
}