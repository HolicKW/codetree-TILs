#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
#define MAX 100
using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX];
int box[MAX][MAX];
queue<pair<int,int>> q;
int n,k;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}
bool canGo(int x, int y){
    return inRange(x,y) && !visited[x][y] && arr[x][y] != 0;
}
void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(canGo(nx,ny)){
                visited[nx][ny] = true;
                box[nx][ny] = box[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

}
int main(){
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
            box[i][j] = -1;
            if(arr[i][j] == 2){
                q.push({i,j});
                visited[i][j] = true;
                box[i][j] = 0;
            }
        }
    }
    bfs();
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(arr[i][j] != 0 && box[i][j] >= 0){
                cout << box[i][j] << " ";                
            }
            else if(arr[i][j] == 1 && box[i][j] == -1){
                cout << "-2" << " ";
            }
            else{
                cout << "-1" << " ";
            }
        }
        cout << "\n";
    }
}
