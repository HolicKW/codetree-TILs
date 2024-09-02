#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0;
    int y = 0;
    int dir = 3;
    int nx[4] = {1,0,-1,0};
    int ny[4] = {0,-1,0,1};
    string com;
    cin >> com;
    for(int i = 0; i<com.length(); i++){
        if(com[i] == 'F'){
            x += nx[dir];
            y += ny[dir];
        }
        else if(com[i] == 'L'){
            dir = (dir + 3) % 4;
        }
        else if(com[i] == 'R'){
            dir = (dir + 1) % 4;
        }
    }
    cout << x << ' ' << y;


    return 0;
}