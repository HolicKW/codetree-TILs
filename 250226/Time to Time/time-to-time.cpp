#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    while(true){
        if(a==c && b==d){
            break;
        }
        b++;
        cnt++;
        if(b==60){
            b=0;
            a++;
        }
    }

    cout << cnt;
    return 0;
}