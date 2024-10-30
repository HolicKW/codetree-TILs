#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 25
int arr[MAX][MAX];
bool visited[MAX][MAX] = {false};
vector<int> vec;
int cnt = 0;
int n;

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}
bool canGo(int x, int y) {
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y] || arr[x][y] == 0){
        return false;
    }
    return true;
}
void dfs(int x, int y){
    int dx[4]={0, 1, 0, -1};
    int dy[4]={-1, 0, 1, 0};
    visited[x][y] = true;
    cnt++;
    for(int i=0; i<4;i++){
       int nx = x+dx[i];
       int ny = y+dy[i];
       if(canGo(nx,ny)){
            dfs(nx,ny);
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(visited[i][j] || arr[i][j]== 0) continue;
            cnt = 0;
            dfs(i,j);
            vec.push_back(cnt);
        }
    }
    sort(vec.begin(),vec.end());

    cout << vec.size() << '\n';
    for(int i = 0; i<vec.size();i++){
        cout << vec[i] << '\n';
    }
    return 0;
}