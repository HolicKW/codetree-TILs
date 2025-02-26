#include <iostream>
using namespace std;

int arr[2001];
int main() {
    // Please write your code here.
    int n;
    int x;
    int loc = 1000;
    char dir;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> x >> dir;
        int a,b;
        if(dir == 'L'){
            a = loc-x;
            b = loc;
            loc = loc-x;
        }
        else{
            a = loc;
            b = loc+x;
            loc = loc+x;
        }

        for(int i = a;i<b;i++){
            arr[i]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i<2001;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}