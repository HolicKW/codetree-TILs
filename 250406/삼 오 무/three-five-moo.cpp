#include <iostream>
#include <climits>
using namespace std;

int n;

int find_idx(int target){
    if(target % 3 == 0 || target % 5  == 0){
        return 0;
    }
    return target - (target/3)  - (target /5)  + (target / 15);
}
int main() {
    // Please write your code here.
    cin >> n;

    int left = 1;
    int right = INT_MAX;
    int ans = INT_MAX;
    while(left<=right){
        int mid = (left+right)/2;
        if(find_idx(mid) >= n){
            ans = min(ans,mid);
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout << ans;
    return 0;
}