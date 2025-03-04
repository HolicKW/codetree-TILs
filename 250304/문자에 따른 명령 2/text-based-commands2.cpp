#include <iostream>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


int main() {
    // Please write your code here.
    string com;
    int x = 0, y= 0;
    cin >> com;
    int dir = 0;
    for(int i = 0; i<com.length(); i++){
        if(com[i] == 'L'){
            dir = (dir+3)%4;
        }
        else if (com[i] == 'R'){
            dir = (dir+1)% 4;
        }
        else{
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << ' ' << y;
    return 0;
}
