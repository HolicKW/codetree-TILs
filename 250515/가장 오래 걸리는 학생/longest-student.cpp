#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

int n, m;
vector<vector<pair<int,int>>> graph;
int dist[100001];

void dijkstra(int start){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for (int i = 1; i <= n; i++) dist[i] = INT_MAX;
    dist[start] = 0;
    pq.push({0, start});

    while(!pq.empty()){
        int Curweight = pq.top().first;
        int Curnode = pq.top().second;
        pq.pop();

        if (Curweight > dist[Curnode]) continue;

        for(auto edge : graph[Curnode]){
            int weight = edge.first;
            int next = edge.second;
            if(dist[next] > Curweight + weight){
                dist[next] = Curweight + weight;
                pq.push({dist[next], next});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    graph.resize(n + 1);
    for(int i = 0; i < m; i++){
        int start, end, w;
        cin >> start >> end >> w;
        graph[end].push_back({w, start}); // 방향 반대로 저장
        graph[start].push_back({w, end}); // 양방향인 경우 유지
    }

    dijkstra(n); // n번 노드에서 출발하여 모든 정점까지 거리 계산

    int ans = 0;
    for (int i = 1; i < n; i++){
        if (dist[i] != INT_MAX)
            ans = max(ans, dist[i]);
    }

    cout << ans;
    return 0;
}
