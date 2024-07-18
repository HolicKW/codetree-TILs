#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int count = 1;
    cin >> n;
    int i =1;
    while(n/i != 0){
        n/= i;
        i++;
        count++;
    }
    cout <<count;
    return 0;
}