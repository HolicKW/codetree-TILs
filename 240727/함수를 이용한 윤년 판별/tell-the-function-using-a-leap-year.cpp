#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n%4 == 0){
        if(n%100 == 0 && n%400 != 0){
            cout << "false";
        }
        else{
            cout << "true";
        }
    }
    else{
        cout <<"false";
    }
    return 0;
}