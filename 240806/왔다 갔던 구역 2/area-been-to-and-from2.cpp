#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> positions(2000, 0);  // 큰 배열을 사용하여 양방향 이동을 처리
    int loc = 1000;  // 시작 위치를 배열 중간으로 설정

    // 주어진 명령에 따라 위치 이동 및 빈도수 계산
    for (int i = 0; i < n; ++i) {
        int a;
        char dir;
        cin >> a >> dir;
        
        if (dir == 'L') {
            for (int j = 0; j < a; ++j) {
                loc--;
                positions[loc]++;
            }
        } else {
            for (int j = 0; j < a; ++j) {
                loc++;
                positions[loc]++;
            }
        }
    }

    int count = 0;  // 빈도수가 2 이상인 위치의 수를 셀 변수
    for (int i = 0; i < 2000; ++i) {
        if (positions[i] >= 2) {
            count++;
        }
    }

    cout << count << endl;  // 결과 출력

    return 0;
}