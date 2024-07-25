#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin >> a;
    a--;
    if(a <'a'){
        a = 'z';
    }
    cout << a;
    return 0;
}