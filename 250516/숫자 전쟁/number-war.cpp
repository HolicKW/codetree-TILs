#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][1001];
int card_one[1001];
int card_two[1001];
int n;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> card_one[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> card_two[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // 1. 왼쪽만 버릴 수 있음
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            // 2. 오른쪽만 버리고 점수 획득
            if(card_one[i] > card_two[j]) {
                dp[i][j] = max(dp[i][j], dp[i][j-1] + card_two[j]);
            }
            // 3. 양쪽 모두 버릴 수 있음
            if(card_one[i] == card_two[j]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        ans = max(ans, dp[i][n]);
        ans = max(ans, dp[n][i]);
    }
    cout << ans;
    return 0;
}
