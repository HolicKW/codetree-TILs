#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100000
int arr[MAX];

int n,m;
int lower_b(int target){
    int left = 0;
    int right = n-1;
    int mid_idx = n;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]>=target){
            right = mid - 1;
            mid_idx = min(mid_idx,mid);
        }
        else{
            left = mid+1;
        }
    }
    return mid_idx;
}
int upper_b(int target){
    int left = 0;
    int right = n-1;
    int mid_idx = n;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]>target){
            right = mid - 1;
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
    sort(arr,arr+n);
    for(int i = 0; i<m;i++){
        int a,b;
        cin >> a >> b;
        cout << upper_b(b)-lower_b(a) << endl;
    }
    return 0;
}