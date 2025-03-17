#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <utility>
#define MAX 100
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n,k,m;
int arr[MAX][MAX];
int ans = 0;
bool visited[MAX][MAX];
vector<pair<int,int>> st;
queue<pair<int,int>> q;
vector<pair<int,int>> stone;

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int bfs(){
    int cnt = k;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(inRange(nx,ny) && !visited[nx][ny] && !arr[nx][ny]){
                cnt++;
                visited[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }

    return cnt;
}

int calc(){
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            visited[i][j] = false;
        }
    }

    for(int i = 0; i<k;i++){
        visited[st[i].first][st[i].second] = true;
        q.push(st[i]);
    }
    int res = bfs();
    return res;
}

void sol(int idx ,int cnt){
    if(cnt == m){
        ans = max(ans,calc());
        return;
    }

    for(int i = idx; i < stone.size(); i++){
        int x = stone[i].first, y = stone[i].second;
        arr[x][y] = 0;
        sol(i+1,cnt+1);
        arr[x][y] = 1;
    }
}
int main() {
    // Please write your code here.
    cin >> n >> k >> m;
    int r,c;
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                stone.push_back({i,j});
            }
        }
    }
    for(int i = 0; i<k; i++){
        cin >> r >> c;
        r--; c--;
        st.push_back({r,c});
    }
    sol(0,0);
    cout << ans;
    
    return 0;
}