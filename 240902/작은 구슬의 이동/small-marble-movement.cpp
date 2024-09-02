#include <iostream>
using namespace std;

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

bool inrange(int x, int y, int ran){
    return(x>=1 && x<=ran && y>=1 && y<=ran);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin >> n >> t;
    int arr[n][n];
    int dx[4] = {1,0,0,-1};
    int dy[4] = {0,-1,1,0};
    int r,c;
    char d;
    cin >> r >> c >> d;
    int dir = getdir(d);
    for(int i = 0; i<t;i++){
        int ny = r + dy[dir];
        int nx = c + dx[dir];
        if(!inrange(nx,ny,n)){
            dir = 3-dir;
            continue;
        }
        r = r + dy[dir];
        c = c + dx[dir];
    }

    cout << r << ' ' << c;
    return 0;
}