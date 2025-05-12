#include <iostream>
#include <climits>
#include <utility>
using namespace std;
int n,m;
int dist[101][101];
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            dist[i][j] = (int)1e9;
        }
        dist[i][i] = 0;
    }

    for(int i = 0 ; i<m;i++){
        int start,end,w;
        cin >> start >> end >> w;
        dist[start][end] = min(dist[start][end],w);
    }

    for(int k = 1; k<=n;k++){
        for(int i = 1; i<=n;i++){
            for(int j =1;j<=n;j++){
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    for(int i = 1; i<=n;i++){
        for(int j =1;j<=n;j++){
            if(dist[i][j] == (int)1e9) cout << "-1 ";
            else cout<<dist[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}