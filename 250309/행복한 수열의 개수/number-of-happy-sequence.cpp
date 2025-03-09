#include <iostream>

using namespace std;

int n, m;
int arr[101][101];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int ans  = 0;
    for(int i = 0; i<n; i++){
        int num = arr[i][0];
        int cnt = 1;
        for(int j = 1; j<n;j++){
            if(arr[i][j] == arr[i][j-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
        }
        if(cnt >=m){
            ans++;
        }
    }
    for(int i = 0; i<n; i++){
        int cnt = 1;
        for(int j = 1; j<n;j++){
            if(arr[j][i] == arr[j-1][i]){
                cnt++;
            }
            else{
                cnt = 1;
            }
        }
        if(cnt >= m){
            ans++;
        }
    }
    
    cout << ans;
    // Please write your code here.

    return 0;
}
