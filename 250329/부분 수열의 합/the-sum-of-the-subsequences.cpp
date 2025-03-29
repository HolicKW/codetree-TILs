#include <iostream>
#include <climits>
using namespace std;
int n,m;
int arr[101];
int dp[10001];
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    dp[0] = 0;
    for(int i = 1;i<=m;i++){
        dp[i] = INT_MIN;
    }
    for(int i = 0; i<n;i++){
        for(int j = m; j>=1;j--)
        {
            if(j >= arr[i]){
                if(dp[j-arr[i]] != INT_MAX){
                    dp[j] = max(dp[j],dp[j-arr[i]]+1);
                }
            }
        }
    }

    if(dp[m] >= 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}