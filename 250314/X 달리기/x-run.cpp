#include <iostream>
using namespace std;

int speed = 1;
int x;

bool check(int v, int t){
    int d = (v*(v+1))/2;
    if(d>t){
        return false;
    }
    else{
        return true;
    }
}
int main() {
    // Please write your code here.
    cin >> x;
    int dis = 0;
    int sec = 0;

    while(dis != x){
        dis += speed;
        if(check(speed+1,x-dis)){
            speed++;
        }
        else if(check(speed,x-dis)){
        }
        else{
            speed--;
        }
        sec++;
    }

    cout << sec;
    return 0;
}