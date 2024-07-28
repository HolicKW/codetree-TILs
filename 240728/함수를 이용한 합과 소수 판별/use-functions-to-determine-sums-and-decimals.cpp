#include <iostream>
using namespace std;

bool Isprime(int a){
    for(int i = 2; i<a;i++){
        if(a%i == 0) return false;
    }
    return true;
}

bool Iseven(int a){
    int result(0);
    while(a>0){
        result += a % 10;
        a/= 10;
    }
    if(result % 2 == 0){
        return true;
    }
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int cnt(0);
    cin >> a >> b;
    for(int i = a; i<=b;i++){
        if(Isprime(i) && Iseven(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}