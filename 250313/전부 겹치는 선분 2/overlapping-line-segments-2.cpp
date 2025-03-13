#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, x, x2;
    int min_x2 = INT_MAX;  // 최소 끝점
    int max_x1 = INT_MIN;  // 최대 시작점
    int cnt = 0;
    cin >> n;
    int segments[n][2];

    // 선분들 입력
    for (int i = 0; i < n; i++) {
        cin >> x >> x2;
        segments[i][0] = x;  // 시작점
        segments[i][1] = x2; // 끝점
        min_x2 = min(min_x2, x2);  // 전체 최소 끝점 갱신
        max_x1 = max(max_x1, x);  // 전체 최대 시작점 갱신
    }

    // 선분 하나씩 제거하면서 겹치는지 확인
    for (int i = 0; i < n; i++) {
        int new_max_x1 = max_x1;
        int new_min_x2 = min_x2;

        // 제거할 선분의 시작점과 끝점이 최대 시작점이나 최소 끝점에 영향을 미치는지 확인
        if (segments[i][0] == max_x1) {
            new_max_x1 = INT_MIN;  // 새로운 최대 시작점을 다시 계산해야 하므로 초기화
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    new_max_x1 = max(new_max_x1, segments[j][0]);
                }
            }
        }

        if (segments[i][1] == min_x2) {
            new_min_x2 = INT_MAX;  // 새로운 최소 끝점을 다시 계산해야 하므로 초기화
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    new_min_x2 = min(new_min_x2, segments[j][1]);
                }
            }
        }

        // 나머지 선분들이 겹치는지 확인
        if (new_max_x1 <= new_min_x2) {
            cnt++;
        }
    }

    // 결과 출력
    if (cnt == 1 || n - cnt == 1) {
        cout << " Yes";
    } else {
        cout << " No";
    }
    return 0;
}
