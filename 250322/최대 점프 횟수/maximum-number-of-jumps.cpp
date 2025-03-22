#include <iostream>
#include <climits>
using namespace std;
int n;
int arr[1000];
int dp[1000];
int ans;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        dp[i] = INT_MIN;
    }
    dp[0] = 0;
    for(int i = 1; i<n;i++){
        for(int j = 0; j<i;j++){
            if(dp[j] == INT_MIN){
                continue;
            }
            if(arr[j] + j >= i){
                dp[i] = max(dp[i],dp[j]+1);
                ans = max(ans,dp[i]);
            }
        }
    }
    cout << ans;
}