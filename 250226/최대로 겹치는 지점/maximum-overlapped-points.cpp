#include <iostream>
using namespace std;

int arr[101];

int main() {
    // Please write your code here.
    int n;
    int x1,x2;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> x1 >> x2;
        for(int i =x1;i<=x2;i++){
            arr[i]++;
        }
    }
    int ans = 0;
    for(int i = 0 ;i<101;i++){
        ans = max(ans,arr[i]);
    }

    cout << ans;
    return 0;
}