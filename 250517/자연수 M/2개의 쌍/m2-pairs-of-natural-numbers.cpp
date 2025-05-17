#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector<pair<long long,long long>> vec;
long long n;
int main() {
    // Please write your code here.
    long long cnt = 0;
    cin >> n;
    for(int i = 0; i<n;i++){
        long long x,y;
        cin >> x >> y;
        cnt +=x;
        vec.push_back({y,x});
    }
    cnt /=2;
    sort(vec.begin(),vec.end());
    long long ans = 0;
    long long i = 0;
    long long j = vec.size()-1;
    long long sum_cnt = 0;
    while(cnt > sum_cnt){
        long long a = vec[i].first;
        long long b = vec[j].first;
        long long num = min(vec[i].second,vec[j].second);
        if(i == j){
            num = num/2;
        }
        sum_cnt += num;
        ans = max(ans,a+b);
        vec[i].second -= num;
        vec[j].second -= num;
        if(vec[i].second <= 0){
            i++;
        }
        if(vec[j].second <= 0){
            j--;
        }

    }
    
    cout << ans;
    return 0;
}