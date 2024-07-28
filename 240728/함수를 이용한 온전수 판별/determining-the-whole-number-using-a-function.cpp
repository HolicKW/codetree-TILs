#include <iostream>
using namespace std;

bool Istrue(int a){
    if(a%2 == 0 || a% 10 == 5 || (a%3==0 && a%9!=0)){
        return false;
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int cnt(0);
    cin >> a >> b;
    for(int i = a; i<=b; i++){
        if(Istrue(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}