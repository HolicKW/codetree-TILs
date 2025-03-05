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
                for(int t = i; t<=j; t++){
                    ans = max(ans,arr[t]);
                }
            }
        }
    }

    cout << ans;
    return 0;
}