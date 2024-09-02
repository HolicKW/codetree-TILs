#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int dx[4] = {-1,0,0,1};
    int dy[4] = {0,-1,1,0};
    int nx = 0;
    int ny = 0;
    cin >> n;
    for(int i = 0; i<n;i++){
        char dir;
        int a;
        cin >> dir >> a;
        if(dir == 'W'){
            nx += dx[0] * a;
        }

        if(dir == 'S'){
            ny += dy[1] * a;
        }

        if(dir == 'N'){
            ny += dy[2] * a;
        }

        if(dir == 'E'){
            nx += dx[3] * a;
        }
    }

    cout << nx << ' ' << ny;

    return 0;
}