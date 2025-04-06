#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
long long n,m;
long long a, b;
long long b_s(long long target){
    long long left = 1;
    long long right = m;
    long long cnt = 1;
    while(left<=right){
        long long mid = (left+right)/2;
        if(mid == target){
            return cnt;
        }
        if(mid>target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        cnt += 1;
    }
    return cnt;
}
int main() {
    // Please write your code here.
    cin >> m;
    cin >> a >> b;
    long long min_num = LLONG_MAX;
    long long max_num = LLONG_MIN;
    for(long long i = a;i<=b;i++){
        long long result = b_s(i);
        min_num = min(min_num,result);
        max_num = max(max_num,result);
    }

    cout << min_num << ' ' << max_num;
    
    return 0;
}