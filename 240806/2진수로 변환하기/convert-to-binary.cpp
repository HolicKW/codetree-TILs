#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int digit[30];
    int cnt(0);
    if(n == 0){
        cout << "0";
        return 0;
    }
    while(1){
        if(n<2){
            digit[cnt] = 1;
            break;
        }
        digit[cnt++] = n%2;
        n/=2;
    }
    for(int i = cnt; i >= 0; i--)
        cout << digit[i];

    return 0;
}