#include <iostream>
using namespace std;
int arr[100001];
int dp[100001];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    dp[0] = arr[0];
    for(int i = 1;i<n;i++){
        dp[i] = max(dp[i],dp[i-1]+arr[i]);
    }

    int ans = -1001;
    for(int i = 0 ;i<n;i++){
        ans = max(ans,dp[i]);
    }
    
    cout << ans;
    return 0;
}