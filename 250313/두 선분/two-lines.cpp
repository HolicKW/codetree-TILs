#include <iostream>
#include <climits>
using namespace std;

int x1,x2,x3,x4;
int main() {
    // Please write your code here.
    cin >> x1 >> x2 >> x3 >> x4;
    if(x2 < x3 || x1 > x4){
        cout << "nonintersecting";
    }
    else{
        cout << "intersecting";
    }
    return 0;
}