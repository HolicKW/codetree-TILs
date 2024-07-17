#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a % 2 == 1){
        a +=3;
    }

    if(a%3 == 0){
        cout << a/3;
    }
    else{
        cout << a;
    }
    return 0;
}