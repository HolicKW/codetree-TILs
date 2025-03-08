#include <iostream>
using namespace std;

int arr[21][21];
int n;

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0;i <n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i<n-2;i++){
        for(int j = 0; j<n-2;j++){
            int cnt = 0;
            for(int k = i; k<i+3; k++){
                for(int t = j; t<j+3;t++){
                    if(arr[k][t] == 1){
                        cnt++;
                    }
                }
            }
            ans = max(ans,cnt);
        }
    }

    cout << ans;
    return 0;
}