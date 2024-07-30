#include <iostream>
using namespace std;

int ze(int n){
    if(n<10){
        return (n % 10) * (n%10);
    }
    return ((n % 10)*(n%10)) + ze(n/10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << ze(n);
    return 0;
}