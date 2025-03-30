#include <iostream>
#include <climits>

using namespace std;

int v[100],w[100];
int dp[10001];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> w[i] >> v[i];
    }
    for(int i = 0; i<=10000; i++){
        dp[i] = INT_MIN;
    }
    dp[0] = 0;
    int ans = 0;
    for(int i = 1; i<=m;i++){
        for(int j = 0; j<n;j++){
            if(i>=w[j]){
                if(dp[i-w[j]] != INT_MIN){
                    dp[i] = max(dp[i],dp[i-w[j]] + v[j]);
                    ans = max(ans,dp[i]);
                }
            }
        }
    }
    cout << ans;
    return 0;
}