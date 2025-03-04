#include <iostream>
#include <utility>
#include <climits>
using namespace std;
pair<int,int> arr[101];
int n;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        int a,b;
        cin >> a>> b;
        arr[i] = {a,b};
    }
    int ans = INT_MAX;
    for(int i = 1; i<n-1;i++){
        int dist = 0;
        int prev = 0;
        for(int j = 1; j<n;j++){
            if(i == j){
                continue;
            }
            dist += abs((arr[prev].first-arr[j].first)) + abs((arr[prev].second - arr[j].second));
            prev = j;
        }
        ans = min(ans,dist);
    }

    cout << ans;
    return 0;
}