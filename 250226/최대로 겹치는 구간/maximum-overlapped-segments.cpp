#include <iostream>
using namespace std;

int arr[201];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a,b;
    for(int i =0; i<n;i++){
        cin >> a >> b;
        a+=100;
        b+=100;
        for(int i =a;i<b;i++){
            arr[i]++;
        }
    }
    int ans=0;
    for(int i = 0;i<201;i++){
        ans=max(ans,arr[i]);
    }

    cout << ans;
    return 0;
}