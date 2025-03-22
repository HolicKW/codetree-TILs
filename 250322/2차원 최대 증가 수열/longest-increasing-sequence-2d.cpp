#include <iostream>
#include <climits>
#include <utility>
using namespace std;
int n,m;
int arr[50][50];
int dp[50][50];
int main(){
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
            dp[i][j] = INT_MIN;
        }
    }
    dp[0][0] = 1;
    int ans = 0;
    pair<int,int> dir = {0,0};
    for(int i = 1; i<n;i++){
        for(int j = 1; j<m;j++){
            for(int k = 0; k<i;k++){
                for(int l = 0; l<j;l++){
                    if(arr[i][j] > arr[k][l] && dp[k][l] != INT_MIN){
                        dp[i][j] = max(dp[i][j],dp[k][l]+1);
                        ans = max(ans,dp[i][j]);
                    }
                }
            }
        }
    }
    cout << ans;
}