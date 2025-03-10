#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int arr[1001];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    sort(arr,arr+n);
    for(int i = 0; i<n;i++){
        int cnt = 0;
        for(int j = 0; j<n;j++){
            if(arr[j] <= arr[i]+k && arr[j]>=i){
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}