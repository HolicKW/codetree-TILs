#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n , m;
    cin >> n >> m;
    int temp = n;
    n = m;
    m = temp;
    cout << n << ' ' << m;
    return 0;
}