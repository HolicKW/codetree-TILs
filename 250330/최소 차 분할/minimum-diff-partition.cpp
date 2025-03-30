#include <iostream>
#include <climits>
using namespace std;
int arr[100];
int dp[1000001];
int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        sum +=arr[i];
    }

    for(int i = 0; i<=sum;i++){
        dp[i] = INT_MAX;
    }
    dp[0] = sum;
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j = sum; j>=0; j--){
            if(j>=arr[i]){
                if(dp[j-arr[i]]!=INT_MAX){
                    dp[j] = min(dp[j], abs(sum-(j*2)));
                    ans = min(ans,dp[j]);
                }
            }
        }
    }
    cout << ans;
    return 0;
}