#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int n;
pair<int ,int>arr[101];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i] = {x,y};
    }
    int ans = INT_MAX;
    int min_x = INT_MAX;
    int min_y = INT_MAX; 
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n;j++){
            min_x = min(min_x,abs(arr[i].first - arr[j].first)); 
            min_y = min(min_y,abs(arr[i].second - arr[j].second));
            
        }
        ans = min(ans,(min_x*min_x) + (min_y*min_y));
    }

    cout << ans;
    return 0;
}
