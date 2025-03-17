#include <iostream>
#include <climits>
using namespace std;
#define MAX 1000
int arr[MAX];
int dp[MAX];
int n;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for(int i =0; i<n;i++){
        dp[i] = 1; 
    }
    for(int i = 1; i<n;i++){
        for(int j = 0; j<i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        ans = max(ans,dp[i]);
    }

    cout << ans;
    return 0;
}