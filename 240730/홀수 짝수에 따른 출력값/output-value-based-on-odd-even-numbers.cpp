#include <iostream>
using namespace std;

int odd(int n){
    if(n == 1){
        return 1;
    }

    return n + odd(n-2);
}

int even(int n){
    if(n == 2){
        return 2;
    }

    return n + even(n-2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(n%2==1){
        cout << odd(n);
    }
    else{
        cout << even(n);
    }
    return 0;
}