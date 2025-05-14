#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;
int n,m;
int arr[101][101];
vector<pair<int,int>> edge;
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i<m;i++){
        int start, end;
        cin >> start >> end;
        edge.push_back({start,end});
    }

    for(int k = 1; k<=n;k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n;j++){
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    for(int i = 0; i<edge.size();i++){
        cout << arr[edge[i].first][edge[i].second] << endl;
    }
    return 0;
}