#include <iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2; i<n;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int result(0);

    for(int i = a;i<=b;i++){
        if(isprime(i)){
            result += i;
        }
    }

    cout << result;
    return 0;
}