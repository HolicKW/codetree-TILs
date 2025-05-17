#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector<pair<int,int>> vec;
int n;
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

    sort(vec.begin(),vec.end());
    long long ans = 10e9;
    long long i = 0;
    long long j = vec.size()-1;
    long long sum_cnt = 0;
    while(i<j){
        long long a = vec[i].first;
        long long a_count = vec[i].second;
        long long b = vec[j].first;
        long long b_count = vec[j].second;
        int num = min(a_count,b_count);
        sum_cnt += num;
        ans = min(ans,a+b);
        a_count -= num;
        b_count -= num;
        if(a_count == 0){
            i++;
            vec[j].second = b_count;
        }
        if(b_count == 0){
            j--;
            vec[i].second = a_count;
        }


    }

    cout << ans;
    return 0;
}