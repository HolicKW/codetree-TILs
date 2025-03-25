#include <iostream>
#include <climits>
using namespace std;

int n;
int dp[1001];
int main() {
    cin >> n;
    int arr[3] = {1,2,5};
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[5] = 9;
    for(int i = 2; i<=n; i++){
        dp[i] = INT_MIN;
        int sum = 0;
        for(int j = 0; j<3;j++){
            if(i >= arr[j]){
                if(dp[i-arr[j]] == INT_MIN) continue;
                sum += dp[i-arr[j]];
                
            }
            dp[i] = max(dp[i],sum);
            dp[i]%=10007;
        }
    }


    cout << dp[n] << ' ';
    
    // Please write your code here.

    return 0;
}
