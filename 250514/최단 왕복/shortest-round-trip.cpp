#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int n, m;
int graph[101][101];
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 1; i<=n ;i++){
        for(int j =1; j<=n; j++){
            graph[i][j] = 10001;
        }
    }

    for(int i = 1; i<=m;i++){
        int start, end,w;
        cin >> start >> end >> w;
        graph[start][end] = w;
        
    }
    
    int ans = 20001;
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n;i++){
            for(int j = 1; j<=n ;j++){
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            ans = min(ans, graph[i][j]+graph[j][i]);
        }
    }
    cout << ans;
    return 0;
}