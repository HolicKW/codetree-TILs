#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a,b;
    cin >> a >> b;
    cout << (int)a + b  << ' ';
    if(a>b){
        cout<< (int)a - b;
    }
    else{
        cout << (int)b-a;
    }
    return 0;
}