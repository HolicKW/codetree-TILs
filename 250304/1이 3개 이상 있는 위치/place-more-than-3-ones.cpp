#include <iostream>
using namespace std;
int arr[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int n;
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    // Please write your code here.
    
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int result = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            int cnt = 0;
            for(int dir = 0; dir<4;dir++){
                int nx = i+dx[dir];
                int ny = j+dy[dir];
                if(inRange(nx,ny) && arr[nx][ny] == 1){
                    cnt++;
                }

            }
            if(cnt >=3){
                result++;
            }
        }
    }
    cout << result;

    return 0;
}