#include <iostream>
using namespace std;
#define MAX 100000
int arr[MAX];
int num[MAX];
int n,m;

int lower_b(int target){
    int left = 0;
    int right = n-1;
    int mid_idx = n;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] >= target){
            right = mid-1;
            mid_idx = min(mid_idx,mid);
        }
        else{
            left = mid+1;
        }

    }
    return mid_idx;
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i<m; i++){
        cin >> num[i];
    }
    for(int i = 0; i<m; i++){
        int ans = lower_b(num[i]);
        if(arr[ans] == num[i]){
            cout << ans+1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}