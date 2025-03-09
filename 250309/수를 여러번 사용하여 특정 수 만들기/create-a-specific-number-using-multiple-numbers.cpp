#include <iostream>
using namespace std;

int a,b,c;
int ans = 0;
int sol(int x,int y){
    if(a*x + b*y > c){
        return 0;
    }

    return max(a*x+b*y,max(sol(x+1,y),sol(x,y+1)));
}
int main() {
    // Please write your code here.
    cin >> a >> b >> c;
    cout << sol(0,0);
    return 0;
}