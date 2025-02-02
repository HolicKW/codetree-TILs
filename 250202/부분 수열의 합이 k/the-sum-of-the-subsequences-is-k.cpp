#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    int arr[1001];
    int sum[1001];
    cin >> n >> k;
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }
    for(int i = 1; i<=n;i++){
        sum[i] = sum[i-1] + arr[i];
    }

    int cnt = 0;
    for(int i = 1; i<=n; i++){
        for(int j = i; j<=n;j++){
            if(sum[j] - sum[j-i] == k){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}