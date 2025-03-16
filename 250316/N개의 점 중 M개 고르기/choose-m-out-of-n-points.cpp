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
    int dis = 0;
    int sum = 0;
    for(int i = 0; i<dir.size(); i++){
        for(int j = i+1; j<dir.size();j++){
            int x1 = dir[i].first, y1 = dir[i].second;
            int x2 = dir[j].first, y2 = dir[j].second;
            sum = pow(x1 - x2, 2) + pow(y1 - y2, 2);
            dis = max(dis,sum);
        }
    }
    return dis;
}

void sol(int cnt, int idx){
    if(cnt == m){
        ans = min(ans, dist(vec));
        return;
    }

    for(int i = idx; i<n; i++){
        vec.push_back(arr[i]);
        sol(cnt+1, i+1);
        vec.pop_back();
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sol(0, 0);

    cout << ans;
    return 0;
}
