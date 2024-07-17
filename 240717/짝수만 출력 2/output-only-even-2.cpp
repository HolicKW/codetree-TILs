#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int b,a;
    cin >> b >> a;
    int i = b;
    while(1){
        if(a>i){
            break;
        }
        if(i % 2 == 0){
            cout << i << ' ';
        }
        i-=2;
    }
    return 0;
}