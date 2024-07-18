#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int a = 1;
    for(int i = 0 ; i<5;i++){
        cin >> n;
        if(n%3 != 0){
            a = 0;
        }
    }

    cout << a;
    return 0;
}