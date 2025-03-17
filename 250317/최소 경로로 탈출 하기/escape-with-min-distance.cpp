#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#define MAX 100
using namespace std;
int n,m;
int arr[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int step[MAX][MAX];
queue<pair<int,int>> q;

bool inRange(int x, int y){
    return x>=0 && x < n && y>=0 && y<m;
}

bool canGo(int x, int y){
    return inRange(x,y) && !visited[x][y] && (arr[x][y] == 1);
}

void Push(int x, int y, int s){
    step[x][y] = s;
    visited[x][y] = true;
    q.push({x,y});
}

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4;i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(canGo(nx,ny)){
                Push(nx,ny,step[x][y]+1);
            }
        }
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    q.push({0,0});
    Push(0,0,0);
    bfs();
    cout << step[n-1][m-1];
    return 0;
}