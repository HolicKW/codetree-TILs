#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 100
int n,m;
queue<pair<int, int>> q;
int arr[MAX][MAX] = {0};
bool visited[MAX][MAX] = {false};

bool inRange(int x, int y){
    return x>=0 && x<MAX && y>=0 && y<MAX;
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

void bfs(int x, int y){
    int dx[2] = {1,0};
    int dy[2] = {0,1};
    
    while(!q.empty()){
        pair<int, int> curr = q.front();
        q.pop();

        int x = curr.first;
        int y = curr.second;
        for(int i = 0; i<2;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(canGo(nx,ny)){
                visited[nx][ny] = true;
                q.push(make_pair(nx,ny));
            }
        } 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }

    q.push(make_pair(0,0));
    visited[0][0] = true;
    bfs(0,0);
    
    cout << arr[n-1][m-1];
    return 0;
}