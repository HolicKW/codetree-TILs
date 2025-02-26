#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int time_1 = a*60+b;
    int time_2 = c*60+d;

    cout << time_2-time_1;
    return 0;
}