#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    int result(0);
    
    while(a!=0){
        result += a%10;
        a/=10;
    }

    cout << result;
    return 0;
}