#include <iostream>

using namespace std;
int arr[1000];
int dp[1000];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    dp[0] = 1;
    for(int i = 1; i<n;i++){
        dp[i] = 1;
        for(int j = 0; j<i;j++){
            if(arr[i] < arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = max(ans,dp[i]);
    }
    cout << ans;
}
