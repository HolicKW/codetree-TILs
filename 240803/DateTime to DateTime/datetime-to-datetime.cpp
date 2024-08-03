#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    int elev = (1440 * 11) + (60 * 11) + 11;
    int result = (1440 * a) + (60 * b) + c;
    if(elev > result){
        cout << "-1";
    }
    else
        cout << result - elev;
    return 0;
}