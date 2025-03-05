#include <iostream>
using namespace std;
int arr[101];
int a[2];
int b[2];
int c[2];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<2;i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    int cnt = 0;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            for(int k =1; k<=n;k++){
                if((abs(a[0]-i) <= 2 || abs(a[0]-i) >= n-2)
                &&(abs(b[0]-j) <= 2 || abs(b[0]-j) >= n-2)
                &&(abs(c[0]-k) <= 2 || abs(c[0]-k) >= n-2)){
                    cnt++;
                }
                else if((abs(a[1]-i) <= 2 || abs(a[1]-i) >= n-2)
                &&(abs(b[1]-j) <= 2 || abs(b[1]-j) >= n-2)
                &&(abs(c[1]-k) <= 2 || abs(c[1]-k) >= n-2)){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}