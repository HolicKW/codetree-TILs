#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <climits>

#define MAX 100
using namespace std;
int n,h,m;
int arr[MAX][MAX];
queue<pair<int,int>> q;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int visited[MAX][MAX];
int rain[MAX][MAX];
int result[MAX][MAX];

bool isRange(int x,int y){
    return x>=0 && x<n && y>=0 && y<n;
}
bool canGo(int x,int y){
    return isRange(x,y) && !visited[x][y] && arr[x][y] != 1;
}

void init(){
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            visited[i][j] = 0;
            rain[i][j] = 0;
        }
    }
}

void bfs(int startX, int startY){
    init();
    visited[startX][startY] = 1;
    q.push({startX, startY});
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(canGo(nx,ny)){
                rain[nx][ny] = rain[x][y] + 1;
                if(arr[nx][ny] == 3){
                    result[startX][startY] = min(result[startX][startY], rain[nx][ny]);
                }
                visited[nx][ny] = 1;
                q.push({nx,ny});
            }
        }
    }
}
    

int main(){
    cin >> n >> h >> m;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 2){
                result[i][j] = INT_MAX;
            }
        }
    }
    
    // 각 사람(2)의 위치에서 BFS 시작
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(arr[i][j] == 2){
                bfs(i,j);
            }
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(arr[i][j] == 2 && result[i][j] == INT_MAX){
                cout << -1 << " ";
            }
            else{
                cout << result[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
