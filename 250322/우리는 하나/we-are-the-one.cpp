#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#define MAX 8
using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int,int>> q;
vector<pair<int,int>> dir_num;
vector<pair<int,int>> dir;
int n,k,u,d;
int res,ans;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void init(){
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            visited[i][j] = false;
        }
    }
    while(!q.empty()){
        q.pop();
    }
}
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}
bool isMove(int x, int y, int x2, int y2){
    return abs(arr[x2][y2] - arr[x][y]) >=u && abs(arr[x2][y2] - arr[x][y]) <= d;
}
bool canGo(int x, int y){
    return inRange(x,y) && !visited[x][y];
}

int bfs(){
    int cnt = k;
    for(int i = 0; i<k;i++){
        q.push({dir_num[i].first,dir_num[i].second});
        visited[dir_num[i].first][dir_num[i].second] = true;
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(canGo(nx,ny) && isMove(x,y,nx,ny)){
                cnt++;
                visited[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
    return cnt;
}

void sol(int idx ,int cnt){
    if(cnt == k){
        init();
        ans = max(ans,bfs());
        return;
    }
    if(cnt > k){
        return;
    }
    for(int i = idx; i<n*n;i++){
        dir_num.push_back(dir[i]);
        sol(i+1,cnt+1);
        dir_num.pop_back();
    }   

}
int main(){
    cin >> n >> k >> u >> d;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
            dir.push_back({i,j});
        }
    }
    sol(0,0);
    cout << ans;
}