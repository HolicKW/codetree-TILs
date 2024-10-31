#include <iostream>

#define MAX 50
using namespace std;
int arr[MAX][MAX];
bool visited[MAX][MAX] = {false};
int n,m;
int k = 1;

void setVisited(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = false;
        }
    }
}
bool inRange(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}

bool canGo(int x, int y){
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y] || arr[x][y] <= k){
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
        if(canGo(nx,ny)){
            dfs(nx,ny);
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int max_height = 0;
    int max_count = 0;
    int max_k = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
            max_height = max(arr[i][j], max_height);
        }
    }

    for(k; k<=max_height; k++){
        setVisited();
        int count(0);

        for(int i = 0; i<n;i++){
            for(int j = 0; j<m;j++){
                if(canGo(i,j)){
                    dfs(i,j);
                    count++;
                }
            }
        }

        if (count > max_count || (count == max_count && k < max_k)) {
            max_count = count;
            max_k = k;
        }

    }
    cout << max_k << " " << max_count;


    return 0;
}