#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n, m;
int coin[100];
int dp[10001];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    sort(coin, coin + n);
    dp[0] = 0;

    for (int i = 1; i <= m; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (i >= coin[j]) {
                if(dp[i-coin[j]] != INT_MAX){
                    dp[i] = min(dp[i], dp[i - coin[j]] + 1);
                }
            }
        }
    }

    
    if (dp[m] == INT_MAX)
        cout << -1;  
    else
        cout << dp[m];  // 가능한 경우

    return 0;
}
