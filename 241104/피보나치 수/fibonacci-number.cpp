#include <iostream>
using namespace std;
int memo[46] = {0};
int fibo(int n){
    if(memo[n] != 0){
        return memo[n];
    }
    if(n<=2){
        memo[n] = 1;
    }
    else{
        memo[n] = fibo(n-1) + fibo(n-2);
    }
    return memo[n];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}