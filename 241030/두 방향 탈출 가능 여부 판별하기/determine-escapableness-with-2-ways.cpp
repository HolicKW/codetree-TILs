#include <iostream>
using namespace std;

int n, m;
#define MAX 100
int arr[MAX][MAX];
bool visited[MAX][MAX] = {false};

bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool canGo(int x, int y) {
    if (!inRange(x, y)) {
        return false;
    }
    if (visited[x][y] || arr[x][y] == 0) {
        return false;
    }
    return true;
}

void dfs(int x, int y) {
    if (x == n - 1 && y == m - 1) {
        cout << 1;
        exit(0);
    }

    int dx[2] = {0, 1};
    int dy[2] = {1, 0};

    visited[x][y] = true;
    for (int i = 0; i < 2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (canGo(nx, ny)) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    dfs(0, 0);
    cout << 0;
    return 0;
}