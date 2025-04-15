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
    int buy = cost[0];
    
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = max(ans,cost[i]-buy);
        buy = min(buy,cost[i]);
    }
    cout << ans;
    return 0;
}