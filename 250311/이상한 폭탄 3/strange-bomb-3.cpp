#include <iostream>
using namespace std;
int arr[101];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;

    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    int sum = 0;
    for(int i = 0; i<n;i++){
        int cnt = 0;
        int prev = i;
        for(int j = i+1; j<n;j++){
            if(arr[i] == arr[j] && j-prev <= k){
                cnt++;
            }
            prev = j;
        }
        if(cnt>=sum && cnt != 0){
            sum = cnt;
            ans = arr[i];
            
        }

    }

    cout << ans;
    return 0;
}