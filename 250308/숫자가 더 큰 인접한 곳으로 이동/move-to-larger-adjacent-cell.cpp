#include <iostream>
using namespace std;

int arr[101][101];
int n,t;
int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    // Please write your code here.
    int r,c;
    cin >> n >> r >> c;
    r -=1;
    c -=1;
    for(int i =0;i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << arr[r][c] << ' ';
    while(1){
        int r_d = r;
        int c_d = c;
        for(int i =0; i<4;i++){
            int nx = c+dx[i];
            int ny = r+dy[i];
            if(inRange(nx,ny) && arr[ny][nx] > arr[r][c]){
                cout << arr[ny][nx] << ' ';
                r = ny;
                c = nx;
                break;
            }
        }
        if(r_d == r && c_d == c){
            break;
        }
    }
    return 0;
}