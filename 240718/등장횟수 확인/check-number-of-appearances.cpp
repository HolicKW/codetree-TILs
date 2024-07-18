#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int result = 0;
    int a;
    for(int i =0; i<5; i++){
        cin >> a;
        if(a%2==0){
            result++;
        }
    }
    cout << result;
    return 0;
}