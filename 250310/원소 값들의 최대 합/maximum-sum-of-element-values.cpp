#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 1; i<=n;i++){
        int sum = 0;
        int idx = i;
        int steps = m;
        while(steps>0){
            sum += arr[idx];
            idx = arr[idx];
            steps--;
        }
        ans = max(ans,sum);
    }

    cout << ans;
    return 0;
}