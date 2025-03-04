#include <iostream>
using namespace std;
int arr[101][101];
int getdir(char dir){
    if(dir == 'R'){
        return 0;
    }
    else if(dir == 'D'){
        return 1;
    }
    else if(dir == 'U'){
        return 2;
    }
    else if(dir == 'L'){
        return 3;
    }
}
int n,t;
bool inrange(int x, int y){
    return(x>=1 && x<=n && y>=1 && y<=n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;
    int dx[4] = {1,0,0,-1};
    int dy[4] = {0,1,-1,0};
    int r,c;
    char d;
    cin >> r >> c >> d;

    int dir = getdir(d);
    for(int i = 0; i<t;i++){
        int ny = r + dy[dir];
        int nx = c + dx[dir];
        if(!inrange(nx,ny)){
            dir = 3-dir;
            continue;
        }
        r = r + dy[dir];
        c = c + dx[dir];
    }

    cout << r << ' ' << c;
    return 0;
}
