#include <iostream>
#include <climits>
using namespace std;
#define MAX 100000
int cost[MAX];
int n;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> cost[i];
    }
    int buy = INT_MAX;
    
    int ans = 0;
    for(int i = 0; i<n; i++){
        buy = min(buy,cost[i]);
        int sell = INT_MIN;
        for(int j = i+1; j<n;j++){
            sell = max(sell,cost[j]);
        }
        ans = max(ans,sell-buy);
    }
    cout << ans;
    return 0;
}