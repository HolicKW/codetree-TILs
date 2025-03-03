//끝점부터 반대로 순회
#include <iostream>
using namespace std;

int n;
int arr[101][101];
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};

bool inRange(int x,int y){
    return x>=0 && x<n && y>=0 && y<n;
}
int main() {
    // Please write your code here.
    cin >> n;
    int tmp = n*n;
    int x = n-1;
    int y = n-1;
    int dir =0;
    arr[x][y] = tmp;
    for(int i = 1; i<n*n;i++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(inRange(nx,ny) && arr[nx][ny] == 0){
            arr[nx][ny] = tmp - i;
        }
        else{
            dir = (dir+1)%4;
            nx = x+dx[dir];
            ny = y+dy[dir];
            arr[nx][ny] = tmp-i;
        }
        x = nx;
        y = ny;
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}