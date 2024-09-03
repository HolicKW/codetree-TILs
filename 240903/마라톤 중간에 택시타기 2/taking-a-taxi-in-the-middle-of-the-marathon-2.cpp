#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int x[100] = 0;
    int y[100] = 0;
    for(int i = 0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    int ans = INT_MAX;
    int dis;
    for(int i = 1; i<n-1; i++){
        int prev = 0;
        for(int j = 1; j<n;j++){
            if(j == i) continue; 
            dis += abs(x[prev] - x[j]) + abs(y[prev] - y[j]);
        }

        ans = min(ans, dis);
    }
    cout << ans;
    return 0;
}