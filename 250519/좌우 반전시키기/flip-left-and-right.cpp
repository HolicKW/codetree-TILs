#include <iostream>
using namespace std;
int n;
int a[101];

void ChangeZero(int idx){
    a[idx-1] = !a[idx-1];
    a[idx] = !a[idx];
    a[idx+1] = !a[idx+1];
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1;i<n;i++){
        if(a[i-1] == 0){
            ChangeZero(i);
            cnt++;
        }
    }
    for(int i =0;i<n;i++){
        if(a[i] != 1){
            cout << -1;
            return 0;
        }
    }
    cout << cnt;

    return 0;
}