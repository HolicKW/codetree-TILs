#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
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
    for(int i = 2;i<=n;i++){
        cout << graph[i][0]<<endl;
    }   
    return 0;
}
