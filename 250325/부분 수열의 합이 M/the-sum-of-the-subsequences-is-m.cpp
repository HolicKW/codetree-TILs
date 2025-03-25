#include <iostream>
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
    for (int i = 0; i <= m; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for(int i = 0; i<n;i++){
        for(int j = m; j>=0;j--){
            if(j >= coin[i]){
                if(dp[j-coin[i]] == INT_MAX) continue;
                dp[j] = min(dp[j],dp[j-coin[i]]+1);
            }
        }
    }
    if(dp[m] == INT_MAX){
        cout << "-1";
    }
    else{
        cout << dp[m];
    }
    // Please write your code here.

    return 0;
}
