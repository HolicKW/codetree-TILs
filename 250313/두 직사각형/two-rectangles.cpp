#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1,x2,y1,y2,a1,a2,b1,b2;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(a1 > x2 || x1 > a2 || y1>b2 || b1 > y2){
        cout << "nonoverlapping";
    }
    else{
        cout << "overlapping";
    }
    return 0;
}