#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age1,age2;
    char a1,a2;
    cin >> age1 >> a1;
    cin >> age2 >> a2;
    if((age1 >= 19 && a1 == 'M') || (age2 >= 19&&a2 == 'M')){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}