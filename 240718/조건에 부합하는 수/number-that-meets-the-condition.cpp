#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        // 조건을 모두 만족하지 않는 수를 찾기
        bool condition1 = (i % 2 == 0 && i % 4 != 0); // 짝수이면서 4의 배수가 아닌 수
        bool condition2 = ((i / 8) % 2 == 0); // 8로 나눈 몫이 짝수인 수
        bool condition3 = (i % 7 < 4); // 7로 나눈 나머지가 4보다 작은 수

        // 조건을 모두 만족하지 않는 수를 출력
        if (!condition1 && !condition2 && !condition3) {
            cout << i << " ";
        }
    }
    return 0;
}