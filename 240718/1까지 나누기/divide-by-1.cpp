#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int count = 0;
    cin >> n;
    int i = 0;
    while(1){
        i++;
        count++;
        if(n/i <= 1){
            break;
        }
        n/=i;
    }
    cout <<count;
    return 0;
}