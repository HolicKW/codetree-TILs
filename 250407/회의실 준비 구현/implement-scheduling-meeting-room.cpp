#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
#define MAX 100000
int n;
pair<int,int> lec[MAX];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n; i++){
        int s,e;
        cin >> s >> e;
        lec[i].first = e;
        lec[i].second = s;
    }
    sort(lec,lec+n);
    int ans = 0;
    int last = 0; //끝나는 시간
    for(int i = 0; i<n;i++){
        if(lec[i].first < last){ //만약 전 회의가 끝나는 시간보다 빠르다면  
            continue;
        }
        if(lec[i].second >= last){ //시작 시간이 끝나는시간과 같거나 그 후에 시작한다면
            ans++;
            last = lec[i].first;
        }
    }

    cout << ans;
    return 0;
}