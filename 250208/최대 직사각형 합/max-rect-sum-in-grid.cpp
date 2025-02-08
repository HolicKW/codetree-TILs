#include <iostream>
#include <climits>
using namespace std;

int arr[301][301];
int sum[301][301];
int n;
int dp[301];

int GetSum(int x1, int y1, int x2, int y2) {

    return sum[x2][y2]  - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
}

int GetMax(int x1, int x2){
    for(int y =1; y<=n;y++){
        int value = GetSum(x1,y,x2,y);

        dp[y] = max(value,dp[y-1]+value);
    }

    int max_area = INT_MIN;
    for(int y = 1; y<=n;y++){
        max_area = max(max_area,dp[y]);
    }
    return max_area;
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            sum[i][j] = arr[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]; 
        }
    }
    int result = -1e9;
    for(int i =1;i<=n;i++){
        for(int j=i;j<=n;j++){
            result = max(result,GetMax(i,j));
        }
    }
    cout <<result;
    return 0;
}