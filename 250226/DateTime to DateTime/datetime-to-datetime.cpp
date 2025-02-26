#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    int time = (a-11) * 1440;
    time += (b-11) * 60;
    time += c-11;
    if(time >=0){
        cout << time;
    }
    else{
        cout << -1;
    }
    return 0;
}