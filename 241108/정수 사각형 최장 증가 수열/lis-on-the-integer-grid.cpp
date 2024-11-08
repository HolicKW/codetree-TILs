#include <iostream>
using namespace std;
int n;
int arr[501][501];
int dp[501][501] = {0,};
int dx[4] = {-1, 1, 0, 0}; // 상하좌우 이동을 위한 배열
int dy[4] = {0, 0, -1, 1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int dfs(int x, int y){
    if(dp[x][y] != 0) return dp[x][y];
    dp[x][y] = 1; 

    for(int i = 0; i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(inRange(nx,ny) && arr[nx][ny] > arr[x][y]){
            dp[x][y] = max(dp[x][y], dfs(nx,ny) + 1);
        }
    }
    return dp[x][y];
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    int result = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            result = max(result,dfs(i,j));
        }
    }

    cout << result;
    return 0;
}