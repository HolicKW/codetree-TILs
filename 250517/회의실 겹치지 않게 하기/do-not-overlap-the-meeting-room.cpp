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
    int last = 0; // 마지막으로 회의가 끝나는 시간
    for(int i =0; i<n;i++){
        if(vec[i].second >= last){   //회의가 시작하는 시간은 전 회의가 끝나는 시간과 같거나 커야함
            last = vec[i].first;
        }
        else{
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}