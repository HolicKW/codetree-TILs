#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char ch;
    cin >> ch;
    ch++;
    if(ch > 'z'){
        ch = 'a';
    }
    cout <<ch;
    return 0;
}