#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 1; i<=n;i++){
        int sum = 0;
        int idx = i-1;
        while(m>0){
            sum += arr[idx];
            idx = arr[idx] - 1;
            m--;
        }
        ans = max(ans,sum);
    }

    cout << ans;
    return 0;
}