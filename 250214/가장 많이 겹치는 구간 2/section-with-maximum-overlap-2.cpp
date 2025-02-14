#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector <pair<int,int>>points;
int main() {
    // Please write your code here.
    int n,x1,x2;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> x1 >>x2;
        points.push_back({x1,+1});
        points.push_back({x2,-1});
    }
    sort(points.begin(),points.end());
    int result=0;
    int sum = 0;
    for(int i = 0; i<2*n;i++){
        sum += points[i].second;
        result = max(result,sum);
    }
    cout << result;
    return 0;
}