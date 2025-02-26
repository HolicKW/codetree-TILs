#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    if(a<=11 && b<=11 && c<=11){
        cout << -1;
        return 0;
    }

    int time = (a-11) * 1440;
    time += (b-11) * 60;
    time += c-11;

    cout << time;
    return 0;
}