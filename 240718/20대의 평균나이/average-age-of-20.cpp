#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double result = 0;
    int count = 0;
    while(1){
        int n;
        cin >> n;
        if(n>=20 && n<=29){
            result +=n;
            count++;
        }
        else{
            break;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << result/count;
    return 0;
}