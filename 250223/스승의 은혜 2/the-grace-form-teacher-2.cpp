#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int main() {
    // Please write your code here.
    int n,b;
    cin >> n >> b;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int cnt =0;
    bool coupon = true;
    for(int i = 0; i<n;i++){
        if(b-arr[i]>=0){
            cnt++;
            b-=arr[i];
        }
        else if(b-arr[i]<0 && b-(arr[i]/2) >=0 && coupon){
            coupon = false;
            b = b-(arr[i]/2);
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}