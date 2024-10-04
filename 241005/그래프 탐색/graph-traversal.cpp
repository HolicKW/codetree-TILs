#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> vec(1000);
bool visited[1000] = {false,};
int count = 0;
void dfs(int x){
    visited[x] = true;
    count++;
    for(int i = 0; i<vec[x].size(); i++){
        int y = vec[x][i];
        if(visited[y] == false){
            dfs(y);
        }
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int u,v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    dfs(1);
    cout << count-1;

    return 0;
}