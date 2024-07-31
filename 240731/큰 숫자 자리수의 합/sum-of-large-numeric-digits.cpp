#include <iostream>
using namespace std;
int remin(int n){
    if(n<10){
        return n%10;
    }
    return n%10 + remin(n/10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b  >> c;
    int result = a*b*c;
    cout << remin(result);
    return 0;
}