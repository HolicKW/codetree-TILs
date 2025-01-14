#include <iostream>
using namespace std;
int arr[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<m;
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    int x = 0;
    int y = 0;
    int dir = 0;
    
    arr[x][y] = 1;
    for(int i = 2; i<=n*m; i++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(inRange(nx,ny) && arr[nx][ny] == 0){
            arr[nx][ny] = i;
        }
        else{
            dir = (dir+1)%4;
            nx = x+dx[dir];
            ny = y+dy[dir];
            arr[nx][ny] = i;
        }
        x= nx;
        y= ny;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}