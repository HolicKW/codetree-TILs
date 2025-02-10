#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX 100000
int n;
pair<int,int> arr[MAX+1];
int a[MAX+1];
int b[MAX+1];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i<=n;i++){
        int x, y;
        cin >> x >> y;
        arr[i] = make_pair(x,y);
    }
    a[1] = 0;
    b[n] = 0;
    for(int i = 2; i<=n;i++){
        a[i] = a[i-1] + abs(arr[i].first - arr[i-1].first) + abs(arr[i].second-arr[i-1].second);
    }

    for(int i = n-1; i>=1;i--){
        b[i] = b[i+1] + abs(arr[i].first - arr[i+1].first) + abs(arr[i].second -arr[i+1].second);
    }
    int ans = INT_MAX;
    for(int i = 2; i<n-1; i++){
        int res = a[i-1] + b[i+1]+abs(arr[i+1].first - arr[i-1].first) + abs(arr[i+1].second - arr[i-1].second);
        ans = min(ans,res);
    }

    cout << ans;

    return 0;
}