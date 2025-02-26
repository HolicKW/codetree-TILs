#include <iostream>
using namespace std;

int arr[201][201];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int x,y;
        cin >> x >> y;
        x+=100;
        y+=100;
        for(int i = x;i<x+8;i++){
            for(int j = y;j<y+8;j++){
                arr[i][j]++;
            }
        }
    }
    int cnt =0;
    for(int i = 0; i<201;i++){
        for(int j = 0; j<201;j++){
            if(arr[i][j]>=1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}