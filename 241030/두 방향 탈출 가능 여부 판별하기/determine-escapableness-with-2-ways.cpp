#include <iostream>
using namespace std;
int n,m;
#define MAX 100
int arr[MAX][MAX];
bool visited[MAX][MAX] = {0,};

bool inRange(int x, int y){
    return x >=0 && x<n && y>=0 && y<n;
}

bool canGo(int x, int y){
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y] || arr[x][y] == 0){
        return false;
    }
    return true;
}

void dfs(int x, int y){
    int dx[2] = {0,1};
    int dy[2] = {1,0};
    
    for(int i = 0; i<2;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx == n-1 && ny == m-1){
            cout << 1;
            return;
        }
        
        if(canGo(nx,ny)){
            visited[nx][ny] - 1;
            arr[nx][ny] = 1;
            dfs(nx,ny);
        }

    }

    cout << 0;
    return;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = n; i<n;i++){
        for(int ii = m; ii<m; i++){
            cin >> arr[i][ii];
        }
    }

    dfs(0,0);
    return 0;
}