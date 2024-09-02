#include <iostream>
using namespace std;
int n;

bool inrange(int x,int y){
    return(x>=0 && x<n && y>=0 && y<n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int result = 0;
    cin >> n;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int arr[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            int cnt = 0;
            for(int dir=0; dir<4;dir++){
                int nx = i+dx[dir], ny = j+dy[dir];
                if(inrange(nx,ny) && arr[nx][ny] == 1){
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