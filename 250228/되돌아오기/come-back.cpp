#include <iostream>
using namespace std;

int getdir(char dir){
    if(dir == 'E'){
        return 0;
    }
    else if(dir == 'S'){
        return 1;
    }
    else if(dir == 'W'){
        return 2;
    }
    else if(dir == 'N'){
        return 3;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100][100]= {0,};
    int n;
    cin >> n;
    int t=0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int x = 0;
    int y = 0;
    int nx=0;
    int ny=0;
    for(int i = 0; i<n; i++){
        char dir;
        int d;
        cin >> dir >> d;
        int cur_dir = getdir(dir);
        for(int j = 0; j<d;j++){
            nx = nx+dx[cur_dir];
            ny = ny+dy[cur_dir];
            t++;
            if(nx == 0 && ny == 0){
                cout << t;
                return 0;
            }
        }


    }
    cout << -1;
    return 0;
}
