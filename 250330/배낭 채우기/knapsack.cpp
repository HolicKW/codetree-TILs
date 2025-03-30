#include <iostream>
#include <climits>
using namespace std;
int w[101];
int v[101];
int dp[101][10000]; //n번째 배낭을 골랐을 때 최대의 가치를 저장.
int n,m;
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 1; i<=n;i++){
        cin >> w[i] >> v[i];
    }

    
    for(int i = 0; i<=n;i++){
        for(int j = 0; j<=m;j++){
            dp[i][j] = INT_MIN;
        }
    }
    dp[0][0] = 0;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = m; j>=0; j--){
            dp[i][j] = dp[i-1][j];
            if(j>=w[i]){
                if(dp[i-1][j-w[i]] != INT_MIN){
                    dp[i][j]= max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
                    ans = max(ans,dp[i-1][j-w[i]]+v[i]);
                }
            }
        }
    }
    cout << ans;
    return 0;
}