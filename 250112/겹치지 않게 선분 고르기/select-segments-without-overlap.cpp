#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

vector<pair<int, int>> vec; // 선분의 시작점과 끝점
int n;
priority_queue<int, vector<int>, greater<int>> pq; // 끝나는 시간 저장 (최소 힙)

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        vec.push_back({x1, x2});
    }

    // 시작 시간을 기준으로 정렬
    sort(vec.begin(), vec.end());

    // 첫 번째 선분의 끝나는 시간 삽입
    pq.push(vec[0].second);
    int result = 1;
    for (int i = 1; i < vec.size(); i++) {
        // 현재 선분의 시작 시간이 우선순위 큐의 최소 끝나는 시간보다 큰 경우에만 겹치지 않음
        if (vec[i].first > pq.top()) {
            result++;
            pq.pop(); // 이전 선분 제거
        }
        // 현재 선분의 끝나는 시간을 삽입
        pq.push(vec[i].second);
    }

    // 우선순위 큐에 남아있는 선분의 개수가 겹치지 않는 최대 선분의 개수
    cout << result << endl;
    return 0;
}
