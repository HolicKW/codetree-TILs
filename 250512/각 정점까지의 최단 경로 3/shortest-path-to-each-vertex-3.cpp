#include <iostream>
#include <algorithm>
#include <climits>
#include <utility>
#include <queue>
#include <vector>
using namespace std;

int n, m;
vector<vector<pair<int, int>>> graph; // 인접 리스트
int dist[101];

void dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 1; i <= n; i++) dist[i] = INT_MAX;

    dist[1] = 0;
    pq.push({0, 1}); // {거리, 노드}

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        if (currentDist > dist[currentNode]) continue;

        for (auto edge : graph[currentNode]) {
            int weight = edge.first;
            int next = edge.second;

            if (dist[next] > currentDist + weight) {
                dist[next] = currentDist + weight;
                pq.push({dist[next], next});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    graph.resize(n + 1); // 인접 리스트 초기화

    for (int i = 0; i < m; i++) {
        int start, end, w;
        cin >> start >> end >> w;
        graph[start].push_back({w, end});
    }

    dijkstra();

    for (int i = 2; i <= n; i++) {
        if (dist[i] == INT_MAX) cout << "-1\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}
