#include <iostream>
using namespace std;
int arr[101][101] = {0,};
int dp[101][101] = {0,};
int n;

void initialize(){
    dp[0][0] = arr[0][0];
    for(int i = 1; i<n; i++){
        dp[0][i] = dp[0][i-1] + arr[0][i];
    }

    for(int i = 1; i<n; i++){
        dp[i][0] = dp[i-1][0] + arr[i][0];
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    initialize();
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n; j++){
            dp[i][j] = max(dp[i][j-1],dp[i-1][j])+arr[i][j];
        }
    }

    cout << dp[n-1][n-1];


    
    return 0;
}