#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

int n, m;
vector<vector<pair<int,int>>> graph;
int ans = 0;
int dist[100001];
void dijkstra(int v){

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    for (int i = 1; i <= n; i++) dist[i] = INT_MAX;

    dist[v] = 0;

    pq.push({0,v});

    while(!pq.empty()){
        int Curweight = pq.top().first;
        int Curnode = pq.top().second;
        pq.pop();

        if (Curweight > dist[Curnode]) continue;

        for(auto edge : graph[Curnode]){
            int weight = edge.first;
            int next = edge.second;
            if(dist[next] > Curweight+weight){
                dist[next] = Curweight+weight;
                pq.push({dist[next],next});
            }
        }
        
    }
    
    
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    graph.resize(n+1);
    for(int i = 0; i<m; i++){
        int start,end,w;
        cin >> start >> end >> w;
        graph[start].push_back({w,end});
        graph[end].push_back({w,start});
    }
    for(int i = 1; i<n;i++){
        dijkstra(i);
        ans = max(ans,dist[n]);
    }
    cout << ans;

    return 0;
}