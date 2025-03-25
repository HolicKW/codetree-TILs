#include <iostream>
#include <climits>
#include <utility>
#include <algorithm>
using namespace std;
#define MAX 1001

pair<int,int> p[MAX];
int dp[MAX];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    for(int i = 0; i<=n;i++){
        dp[i] = INT_MIN;
    }
    dp[1] = 1;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<i; j++){
            if(p[i].first > p[j].second){
                dp[i] = max(dp[i],dp[j]+1);
                ans = max(ans,dp[i]);
            }

        }
    }
    cout << ans;

}
