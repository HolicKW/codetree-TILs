#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[21][21];

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-2;j++){
            for(int k = 0; k<n;k++){
                for(int l = 0; l<n-2; l++){
                    if(i == k && j==l) continue;
                    int max_cnt = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[k][l] + arr[k][l+1] + arr[k][l+2];
                    cnt = max(cnt,max_cnt);
                }
            }
        }
    }
    cout << cnt;
    return 0;
}