#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,k;
    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        int a,b;
        cin >> a >> b;
        arr[b] = a;
    }

    for(int i = 0; i<101; i++){
        int cnt = arr[i];
        for(int j = 1; j<=k;j++){
            if(i-j>=0){
                cnt += arr[i-j];
            }

            if(i+j<101){
                cnt += arr[i+j];
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}