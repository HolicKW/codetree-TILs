#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
long long n,m;
int a, b;
int b_s(int target){
    int left = 1;
    int right = m;
    int cnt = 1;
    while(left<=right){
        int mid = (left+right)/2;
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
}
int main() {
    // Please write your code here.
    cin >> m;
    cin >> a >> b;
    int min_num = INT_MAX;
    int max_num = INT_MIN;
    for(int i = a;i<=b;i++){
        int result = b_s(i);
        min_num = min(min_num,result);
        max_num = max(max_num,result);
    }

    cout << min_num << ' ' << max_num;
    
    return 0;
}