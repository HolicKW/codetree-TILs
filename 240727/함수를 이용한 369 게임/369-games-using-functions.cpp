#include <iostream>
using namespace std;

bool isdiv(int a){
    if(a%3 == 0){
        return true;
    }
    while(a>0){
        int digit = a%10;
        if(digit == 3 || digit == 6 || digit == 9){
            return true;
        }
        a/=10;
        }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt(0);
    int a,b;
    cin >> a >> b;
    for(int i = a; i<=b;i++){
        if(isdiv(i)){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}