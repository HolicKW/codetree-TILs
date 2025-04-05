#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    long long s;
    cin >> s;

    long long left = 1;
    long long right = 10e9;
    long long mid_idx = 0;
    
    while(left<=right){
        long long mid = (left+right)/2;
        if(mid*(mid+1) / 2 <= s){
            mid_idx = max(mid_idx,mid); 
            left = mid + 1;
        }
        else{
            right = mid-1;
        }

    }
    cout << mid_idx;

    return 0;
}