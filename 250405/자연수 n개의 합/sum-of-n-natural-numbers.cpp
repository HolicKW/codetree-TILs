#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n,s;
int main() {
    // Please write your code here.
    int n,s;
    cin >> s;
    int left = 1;
    int right = s;
    int mid_idx = INT_MIN;
    while(left<=right){
        int mid = (left+right)/2;
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