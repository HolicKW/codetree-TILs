#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int n;
vector<pair<int,int>> vec;
int main() {
    // Please write your code here.
    cin >> n;
    vec.resize(n);
    int max_time = 0;
    for(int i = 0; i<n;i++){
        cin >> vec[i].second >> vec[i].first;
        max_time = max(max_time,vec[i].first);
    }
    int res = 0;
    sort(vec.begin(),vec.end());

    for(int i = 1; i<=max_time;i++){
        int ans = 0; 
        for(int j = 0; j<n;j++){
            if(vec[j].first == i){
                ans = max(ans,vec[j].second);
            }
            if(vec[j].first>i){
                break;
            }
        }
        res += ans;        
    }
    cout << res;
    return 0;
}