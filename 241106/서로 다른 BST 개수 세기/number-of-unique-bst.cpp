#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int dp[20];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    int n;
    cin >> n;
    for(int i = 4; i<=n; i++){
        int sum = 0;
        for(int j = 1; j<n; j++){
            sum += dp[j] * dp[i-j];
        }
        dp[i] = sum;
    }

    cout << dp[n];
    return 0;
}