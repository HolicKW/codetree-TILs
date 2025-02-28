#include <iostream>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int x = 0, y = 0;
    for(int i = 0; i<n;i++){
        char dir; int c;
        cin >> dir >> c;
        if(dir == 'N'){
            x+=dx[0]*c;
            y+=dy[0]*c;
        }
        else if(dir == 'E'){
            x+=dx[1]*c;
            y+=dy[1]*c;
        }
        else if(dir == 'S'){
            x+=dx[2]*c;
            y+=dy[2]*c;
        }
        if(dir == 'W'){
            x+=dx[3]*c;
            y+=dy[3]*c;
        }
    }

    cout << x << " " << y;
    return 0;
}