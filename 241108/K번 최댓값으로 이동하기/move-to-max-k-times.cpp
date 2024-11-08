#include <iostream>
#include <queue>
using namespace std;
int n,k;
int r,c;
queue <pair<int,int>> q;
int arr[101][101] = {0,};
bool visited[101][101] = {false};
pair<int,int> pos = {-1,-1};

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

bool canGo(int x, int y){
    if(!inRange(x,y)){
        return false;
    }
    if(visited[x][y]){
        return false;
    }
    return true;
}

void bfs(){
    q.push(pos);
    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;
        int max_value = 0;
        visited[x][y] = true;

        for(int i = 0; i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(canGo(nx,ny) && arr[x][y] > arr[nx][ny]){
                visited[nx][ny] = true;
                if(arr[nx][ny] > max_value){
                    max_value = arr[nx][ny];
                    pos = {nx, ny};
                }
                else if(max_value == arr[nx][ny]){
                    if(pos.first > nx || (pos.first == nx && pos.second>ny)){
                        pos = {nx, ny};
                    }
                }
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> r >> c;
    q.push(make_pair(r-1,c-1));
    for(int i = 0; i<k;i++){
        bfs();
    }

    cout << pos.first <<' ' << pos.second;

    return 0;
}