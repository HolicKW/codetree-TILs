#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int arr[101][101] = {0,};
int dp[101][101] = {INT_MAX};

int main() {
    int n;
    cin >> n;    // 여기에 코드를 작성해주세요.
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }

    dp[0][0] = arr[0][0];
    for(int i =1; i<n;i++){
        dp[i][0] = min(dp[i-1][0],arr[i][0]);
    }
    for(int i =1;i<n;i++){
        dp[0][i] = min(dp[0][i-1],arr[0][i]);
    }

    for(int i = 1; i<n;i++){
        for(int j = 1; j<n;j++){
            int top = min(dp[i-1][j],arr[i][j]);
            int left = min(dp[i][j-1],arr[i][j]);
            dp[i][j] = max(top,left);
        }
    }

    cout << dp[n-1][n-1];

    return 0;
}