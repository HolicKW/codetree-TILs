#include <iostream>
#include <queue>

using namespace std;

int n,k;
queue <pair<int,int>> q;
int arr[101][101];
bool visited[101][101] = {false};
int count = 0;

bool inRange(int x , int y){
    return x>=0 && x<n && y>=0 && y<n;
}

bool canGo(int x, int y){
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y] || arr[x][y] == 1){
        return false;
    }
    return true;
}

void bfs(){
    while(!q.empty()){
        pair<int, int> cur = q.front();
        int x = cur.first;
        int y = cur.second;
        q.pop();

        count++;

        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        for(int i = 0; i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(canGo(nx,ny)){
                q.push(make_pair(nx,ny));
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >>arr[i][j];
        }
    }
    int r,c;
    for(int i = 0; i<k; i++){
        cin >> r >> c;
        q.push(make_pair(r-1,c-1));
        visited[r-1][c-1] = true;
    }
    bfs();
    cout << count;
    return 0;
}