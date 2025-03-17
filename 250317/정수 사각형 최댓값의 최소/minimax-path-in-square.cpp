#include <iostream>
using namespace std;
#define MAX 100
int n;
int arr[MAX][MAX];
int dp[MAX][MAX];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    for(int i = 1; i<n;i++){
        dp[i][0] = max(arr[i][0],dp[i-1][0]);
        dp[0][i] = max(arr[0][i],dp[0][i-1]);
    }
    for(int i = 1; i<n;i++){
        for(int j = 1; j<n;j++){
            dp[i][j] = max(arr[i][j], min(dp[i-1][j],dp[i][j-1]));
        }
    }

    cout << dp[n-1][n-1];
    return 0;
}