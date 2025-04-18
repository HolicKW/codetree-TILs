#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define MAX 100000
int n,m;
int p[MAX];
bool par(long long mid){
    long long num = n;
    for(int i = 0; i<m;i++){
        num -= (mid/p[i]);
        if(num <= 0) return true;
    }
    return false;
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<m;i++){
        cin >> p[i];
    }
    
    sort(p,p+m);
    long long left = 1;
    long long right = 1e15;
    long long ans = LLONG_MAX;
    while(left<=right){
        long long mid = (left+right)/2;
        if(par(mid)){
            right = mid-1;
            ans = min(ans,mid);
        }
        else{
            left = mid+1;
        }
    }

    cout << ans;

    return 0;
}