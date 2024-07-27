#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int result(0);
    for (int i = 1; i<=n;i++){
        result += i;
    }
    cout << result/10;
    return 0;
}