#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[101][2];
    cin >> n;
    for(int i = 0; i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }
    int ans = INT_MAX;
    for(int i = 0; i<n;i++){
        int min_x = INT_MAX, max_x = 0;
        int min_y = INT_MAX, max_y = 0;
        for(int j = 0; j<n;j++){
            if(j==i) continue;

            min_x = min(min_x,arr[j][0]);
            max_x = max(max_x,arr[j][0]);
            min_y = min(min_y,arr[j][1]);
            max_y = max(max_y,arr[j][1]);
            
        }
        ans = min(ans,(max_x-min_x) * (max_y-min_y));
    }

    cout << ans;
    return 0;
}