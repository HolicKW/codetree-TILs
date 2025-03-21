#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <utility>

#define MAX 100
using namespace std;

int n, k;
int r1, c1, r2, c2;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];
vector<pair<int, int>> wall;
queue<pair<int, int>> q;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int result = INT_MAX;

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool canGo(int x, int y) {
    return inRange(x, y) && !visited[x][y] && arr[x][y] != 1;
}

void init() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
            dist[i][j] = INT_MAX;  // 
        }
    }
    while (!q.empty()) {
        q.pop();
    }
}

// BFS로 최단 거리 계산
int bfs() {
    init();
    visited[r1][c1] = true;
    dist[r1][c1] = 0;  
    q.push({r1, c1});

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == r2 && y == c2) {
            return dist[x][y];  
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (canGo(nx, ny)) {
                dist[nx][ny] = dist[x][y] + 1;  
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return INT_MAX;
}

void sol(int idx, int cnt) {
    if (cnt == k) {
        result = min(result, bfs());  
        return;
    }
    for (int i = idx; i < wall.size(); i++) {
        int wall_x = wall[i].first;
        int wall_y = wall[i].second;

        arr[wall_x][wall_y] = 0;  
        sol(i + 1, cnt + 1);      
        arr[wall_x][wall_y] = 1; 
    }
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                wall.push_back({i, j});
            }
        }
    }
    cin >> r1 >> c1 >> r2 >> c2;
    r1--;c1--;r2--;c2--;
    sol(0, 0);

    if (result != INT_MAX) {
        cout << result;
    } else {
        cout << -1;
    }

    return 0;
}
