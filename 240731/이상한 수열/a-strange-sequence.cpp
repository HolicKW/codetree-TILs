#include <iostream>
using namespace std;

int per(int n){
    if(n == 1){
        return 1;
    }
    else if (n == 2){
        return 2;
    }

    return per(n/3) + per(n-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << per(n);
    return 0;
}