#include <iostream>
#include <utility>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

pair<int,int> arr[20];
vector<pair<int,int>> vec;
int ans = INT_MAX;

int n,m;

int dist(vector<pair<int,int>> &dir){
    int min_x = INT_MAX, min_y = INT_MAX;
    int max_x = 0, max_y = 0;
    for(int i = 0; i<dir.size(); i++){
        min_x = min(min_x,dir[i].first);
        min_y = min(min_y,dir[i].second);
        max_x = max(max_x,dir[i].first);
        max_y = max(max_y,dir[i].second);
    }
    int sum = pow(max_x-min_x,2) + pow(max_y-min_y,2);
    return sum;
}
void sol(int cnt, int idx){
    if(cnt == m){
        ans = min(ans,dist(vec));
        return;
    }

    for(int i = idx; i<n; i++){
        vec.push_back(arr[i]);
        sol(cnt+1,i+1);
        vec.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sol(0,0);
    cout << ans;
    return 0;
}