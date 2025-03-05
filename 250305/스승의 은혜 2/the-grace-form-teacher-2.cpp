#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int main() {
    // Please write your code here.
    int n,b;
    int cnt = 0;
    cin >> n >> b;
    bool coupon = true;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i<n;i++){
        if(b-arr[i]>=0){
            cnt++;
            b = b-arr[i];
        }
        else if(b-(arr[i]/2) >=0 && coupon){
            cnt++;
            coupon = false;
            b = b - (arr[i]/2);
        }
    }

    cout << cnt;
    
    return 0;
}