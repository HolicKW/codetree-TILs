#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

vector<pair<int,int>> vec;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int x1,x2;
    for(int i = 0; i<n;i++){
        cin >>x1>>x2;
        vec.push_back({x1,x2});
    }

    vector<pair<int,int>> points;
    for(int i = 0; i<n;i++){
        tie(x1,x2) = vec[i];
        points.push_back({x1,1});
        points.push_back({x2,-1});

    }

    sort(points.begin(),points.end());

    int sum = 0;
    int result = 0;
    for(int i= 0 ; i<2*n; i++){
        int x,v;
        tie(x,v) = points[i];
        sum +=v;
        result = max(result,sum);
    }

    cout << result;
    return 0;
}