#include <iostream>
using namespace std;

#define MAX 100
int arr[MAX][MAX];
bool visited[MAX][MAX] = {false};
int cnt = 0;
int n;

bool inRange(int x,int y){
    return x>=0 && x<n && y>=0 && y<n;
}

bool canGo(int x, int y, int num){
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y] || arr[x][y] != num){
        return false;
    }
    return true;
}

void dfs(int x,int y){
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    visited[x][y] = true;
    for(int i = 0; i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(canGo(nx,ny,arr[x][y])){
            cnt++;
            dfs(nx,ny);
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int max_block = 0;
    int count_block = 0;
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<n;i++){
        for(int j =0; j<n;j++){
            if(visited[i][j] == true) continue;
            cnt = 1;
            dfs(i,j);
            if(cnt>=4) count_block++;
            max_block = max(max_block,cnt);
        }
    }

    cout<< count_block << " " << max_block;
    return 0;
}