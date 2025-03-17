#include <iostream>
#include <queue>
#include <vector>

#define MAX 100
using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX];
int r1,c1,r2,c2;
queue<pair<int,int>> q;
int n;
int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

bool canGo(int x, int y){
    return inRange(x,y) && !visited[x][y];
}
void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<8; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(canGo(nx,ny)){
                q.push({nx,ny});
                arr[nx][ny] = arr[x][y]+1;
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    cin >> r1 >> c1 >> r2 >> c2;
    r1--; c1--; r2--; c2--;
    q.push({r1,c1});
    bfs();
    
    int ans = arr[r2][c2];
    if(ans == 0){
        cout << -1;
    }
    else{
        cout << ans;
    }
    return 0;
}