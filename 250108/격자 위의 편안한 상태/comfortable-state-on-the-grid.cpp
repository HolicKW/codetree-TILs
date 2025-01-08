#include <iostream>
using namespace std;
int n,m;
bool inRange(int x, int y){
    return x>0 && x<=n && y>0 && y<=m;
}
int main() {
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    cin >> n >> m;
    int arr[n][n] = {0};
    for(int i = 0; i<m;i++){
        int r,c;
        cin >> r >> c;
        arr[r][c] = 1;

        int cnt = 0;
        for(int i = 0; i<4;i++){
            int nx = r+dx[i];
            int ny = c+dy[i];
            if(arr[nx][ny] == 1 && inRange(nx,ny)){
                cnt++;
            }
        }
        if(cnt == 3){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    // Please write your code here.
    return 0;
}