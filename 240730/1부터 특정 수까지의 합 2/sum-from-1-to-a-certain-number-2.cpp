#include <iostream>
using namespace std;

int sumn(int n){
    if(n == 1){
        return 1;
    }
    return sumn(n - 1) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << sumn(n);
    return 0;
}