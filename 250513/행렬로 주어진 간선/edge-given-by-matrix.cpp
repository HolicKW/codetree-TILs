#include <iostream>
using namespace std;

int n;
int graph[101][101];
int visit[101][101];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            int a;
            cin >> a;
            if(a == 1){
                graph[i][j] = 1;
            }
            else{
                graph[i][j] = 0;
            }
        }
    }

    for(int k = 1; k<=n;k++){
        for(int i = 1; i<=n;i++){
            for(int j = 1; j<=n; j++){
                if(i==j){
                    graph[i][j] = 1;
                    continue;
                }
                if(graph[i][k] == 1 && graph[k][j] == 1){
                    graph[i][j] = 1;
                }
            }
        }
    }

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n; j++){
            cout << graph[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}