#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a = a*60;
    c = c*60;
    int result = (c+d) - (a+b);
    cout << result; 
    return 0;
}