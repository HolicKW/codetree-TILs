#include <iostream>
#include <climits>
using namespace std;
int stick[101];
int dp[10001];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> stick[i];
    }
    for(int i = 0; i<=n; i++){
        dp[i] = INT_MIN;
        
    }
    dp[0] = 0;
    int ans = 0;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n ;j++){
            if(i >= j){
                if(dp[i-j]!=INT_MIN){
                    dp[i] = max(dp[i],dp[i-j]+stick[j]);
                    ans = max(ans,dp[i]);
                }
            }
        }
    }
    cout << ans;
    return 0;
}