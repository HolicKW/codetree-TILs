#include <iostream>
#include <string>
using namespace std;
int n,t;
string s;
int arr[100][100];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int dir = 0;
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    // Please write your code here.
    cin >> n >> t;
    cin >> s;
    int x = n/2;
    int y = n/2;
    int result= 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >>arr[i][j];
        }
    }
    int nx = x+dx[dir];
    int ny = y+dy[dir];

    for(int i = 0; i<t;i++){
        nx = x+dx[dir];
        ny = y+dy[dir];
        if(s[i] == 'L'){
            dir = (dir+1)%4;
        }
        else if(s[i] == 'R'){
            dir = (dir+3) % 4;
        }
        else if(s[i] == 'F' && inRange(nx,ny)){
            result += arr[x][y];
            x=nx;
            y=ny;
        }
    }
    cout << result+ arr[nx][ny]; 
    return 0;
}