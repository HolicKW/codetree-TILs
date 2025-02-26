#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i =0; i<k;i++){
        int a,b;
        cin >> a >> b;
        for(int i = a;i<=b;i++){
            arr[i]++;
        }
    }
    int ans=0;
    for(int i =0; i<n;i++){
        ans = max(ans,arr[i]);
    }

    cout << ans;
    return 0;
}