#include <iostream>
#include <string>
using namespace std;
int n,m;
char arr[51][51];
int result = 0;
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0-1,-1,-1,0,1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<m;
}

void search_LEE(int x, int y){
    for(int i = 0; i<8;i++){
        string s;
        s += arr[x][y];

        int nx = x+dx[i];
        int ny = y+dy[i];
        for(int j = 0; j<2;j++){
            if(inRange(nx,ny)){
                s += arr[nx][ny];
                nx += dx[i];
                ny += dy[i];
            }
        }

        if(s == "LEE"){
            result++;
        }
    }
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(arr[i][j] == 'L'){
                search_LEE(i,j);
            }
        }
    }
    cout << result;
    return 0;
}