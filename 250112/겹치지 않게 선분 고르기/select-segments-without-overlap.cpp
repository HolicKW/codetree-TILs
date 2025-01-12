#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> vec; // 선분의 시작점과 끝점
int n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        vec.push_back({x1, x2});
    }

    // 끝나는 시간 기준으로 정렬
    sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int result = 0;
    int lastEnd = -1; // 마지막으로 선택한 선분의 끝점

    for (int i = 0; i < n; i++) {
        // 현재 선분이 마지막으로 선택한 선분과 겹치지 않을 경우
        if (vec[i].first >= lastEnd) {
            result++;               // 선분을 선택
            lastEnd = vec[i].second; // 끝나는 지점을 업데이트
        }
    }

    cout << result << endl; // 최대 겹치지 않는 선분 개수 출력
    return 0;
}
