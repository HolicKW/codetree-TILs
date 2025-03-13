#include <iostream>
using namespace std;
int arr[100];
int main() {
    // Please write your code here.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i = a; i<b; i++){
        arr[i] = 1;
    }
    for(int i = c; i<d; i++){
        arr[i] = 1;
    }
    int cnt = 0;
    for(int i = 0; i<100;i++){
        if(arr[i] == 1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}