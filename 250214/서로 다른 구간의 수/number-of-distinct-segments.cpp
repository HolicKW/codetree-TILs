#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<pair<int,int>>vec;
int main() {
    // Please write your code here.
    int n,x1,x2;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> x1 >> x2;
        vec.push_back({x1,x2});
    }

    vector<pair<int,int>>points;

    for(int i = 0; i<n;i++){
        points.push_back({vec[i].first,+1});
        points.push_back({vec[i].second,-1});
    }

    sort(points.begin(),points.end());
    int result = 0;
    int ans = 0;
    for(int i = 0; i<2*n; i++){
        if(ans == 0 && points[i].second == +1){
            result++;
        }
        ans += points[i].second;
    }

    cout << result;
    return 0;
}