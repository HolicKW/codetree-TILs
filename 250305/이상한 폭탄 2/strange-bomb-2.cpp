#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j] && j-i <= k){
                ans = max(ans,arr[i]);
            }
        }
    }

    cout << ans;
    return 0;
}