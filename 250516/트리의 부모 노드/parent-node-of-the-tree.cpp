#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
bool visited[100001];
int parent[100001];
void dfs(int node){
    for(int i = 0; i<graph[node].size(); i++){
        int next = graph[node][i];
        if(!visited[next]){
            visited[next]= true;
            parent[next] = node;

            dfs(next);
        }
    }
}
int main() {
    int n;
    cin >> n;
    graph.resize(n+1);
    for(int i = 0;i<n;i++){
        int p,c;
        cin >> p >> c;
        graph[p].push_back(c);
        graph[c].push_back(p);
    }
    visited[1] = true;
    dfs(1);   
    for(int i = 2; i <= n; i++)
        cout << parent[i] << endl;
    return 0;
}
