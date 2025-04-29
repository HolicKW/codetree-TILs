#include <iostream>
#include <utility>
#include <algorithm>
#include <tuple>
using namespace std;

int n;
pair<int,int> arr[100001];
bool isPossible(int m){
    int cur_x = arr[0].first;
    for(int i = 1; i<n;i++){
        int x1,x2;
        tie(x1,x2) = arr[i];
        if(cur_x+m > x2) return false;
        cur_x = max(cur_x+m,x1);
    }
    return true;
}
int main() {
    // Please write your code here.
    cin >> n;
    long long ans = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr,arr+n);
    long long left = 1;
    long long right = arr[n-1].second;
    while(left<=right){
        long long mid = (left+right)/2;
        if(isPossible(mid)){
            left = mid+1;
            ans = max(ans,mid);
        }
        else{
            right = mid-1;
        }
    }

    cout << ans;
    
    return 0;
}