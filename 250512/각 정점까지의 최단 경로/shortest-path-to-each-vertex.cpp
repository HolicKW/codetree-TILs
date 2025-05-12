#include <iostream>
#include <climits>
#include <utility>
#include <queue>
using namespace std;

vector<vector<pair<int,int>>> graph;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int n,m,k;
int dist[20001];

void dijkstra(){
    for(int i = 1; i<=n;i++) dist[i] = INT_MAX;
    dist[k] = 0;
    pq.push({0,k});
    while(!pq.empty()){
        int CurrentDist = pq.top().first;
        int CurrentNode = pq.top().second;
        pq.pop();

        if(CurrentDist>dist[CurrentNode]) continue;
        
        for(auto edge:graph[CurrentNode]){
            int weight = edge.first;
            int next = edge.second;
            if(dist[next] > CurrentDist + weight){
                dist[next] = CurrentDist + weight;
                pq.push({dist[next], next});
            }
        }
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    cin >> k;
    graph.resize(n+1);
    for(int i = 0; i < m; i++){
        int start,end,w;
        cin >> start >> end >> w;
        graph[start].push_back({w,end});
        graph[end].push_back({w,start});
    }
    
    dijkstra();
    for(int i = 1; i<= n;i++){
        if(dist[i] == INT_MAX) cout << "-1\n";
        else{
            cout << dist[i] << endl;
        }
    }
    return 0;
}