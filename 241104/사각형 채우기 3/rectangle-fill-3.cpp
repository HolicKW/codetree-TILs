#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int dp[1001] = {0};
    dp[1] = 2;
    dp[2] = 7;
    for(int i =3;i<=n;i++){
        dp[i]= (2 * dp[i-1] + dp[i-2])%1000000007; 
    }
    cout << dp[n];
    return 0;
}