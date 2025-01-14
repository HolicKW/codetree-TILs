#include <iostream>
using namespace std;
int n,m;
char arr[101][101] = {0,};
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<m;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    char tmp = 'A';
    arr[0][0] = tmp;
    tmp++;
    int dir = 0;
    int x = 0;
    int y = 0;
    for(int i = 1; i<n*m;i++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(inRange(nx,ny) && arr[nx][ny] == 0){
            
            arr[nx][ny] = tmp; 
        }
        else{
            dir = (dir+1)%4;
            nx = x+dx[dir];
            ny = y+dy[dir];
            
            arr[nx][ny] = tmp;
        }
        tmp++;
        if(tmp+1>'Z') tmp = 'A';
        x = nx;
        y = ny;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}