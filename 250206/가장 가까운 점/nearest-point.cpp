#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#include <functional>
using namespace std;

int main() {
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pq.push(make_tuple(x + y, x, y));
    }

    for (int i = 0; i < m; i++) {
        if (pq.empty()) break; // 예외 처리
        int sum, px, py;
        tie(sum, px, py) = pq.top();
        pq.pop();
        sum += 4; px += 2; py += 2;  // (x+y+4, x+2, y+2) 형태로 push
        pq.push(make_tuple(sum, px, py));
    }

    if (!pq.empty()) {
        int min_x, min_y;
        tie(ignore, min_x, min_y) = pq.top();
        cout << min_x << " " << min_y;
    }

    return 0;
}
