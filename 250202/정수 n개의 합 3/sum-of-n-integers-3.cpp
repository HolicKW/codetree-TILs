#include <iostream>
using namespace std;

int n,k;
int arr[501][501];
int sum[501][501];

int cal(int i, int j){
    int ans = 0;
    if(i-k>=0 && j-k>=0){
        ans = sum[i][j] - sum[i-k][j] - sum[i][j-k] + sum[i-k][j-k];
        return ans;
    }
    return 0;
    
}

int main() {
    // Please write your code here.
    cin >> n >> k;
    for(int i = 1 ;i<=n;i++){
        for(int j = 1; j<=n;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
        }
    }
    int result = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            result = max(result, cal(i,j));
        }
    }

    cout << result;
    return 0;
}