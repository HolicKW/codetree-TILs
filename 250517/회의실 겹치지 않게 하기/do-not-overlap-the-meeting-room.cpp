#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int n;
vector<pair<int,int>> vec;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        int start,end;
        cin >> start >> end;
        vec.push_back({end,start});
    }
    sort(vec.begin(),vec.end());
    int cnt = 0;
    for(int i =0; i<n-1;i++){
        if(vec[i].first <= vec[i+1].first){
            cnt++;
        }
    }

    cout << n-cnt;
    return 0;
}