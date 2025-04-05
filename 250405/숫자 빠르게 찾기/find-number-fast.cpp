#include <iostream>
using namespace std;
#define MAX 100000
int arr[MAX];
int num[MAX];
int bin_search(int left, int right, int target){
    int idx = -1;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid]==target){
            idx = mid+1;
            break;
        }
        if(arr[mid] > target){
            right = mid - 1;
        }   
        else{
            left = mid + 1;
        }
    }
    return idx;
}
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i<m;i++){
        cin >> num[i];
    }
    for(int i = 0; i<m; i++){
        cout << bin_search(0,n-1,num[i]) << endl;
    }

    return 0;
}