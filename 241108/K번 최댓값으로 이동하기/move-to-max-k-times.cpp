#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int n, k;
vector<vector<int>> grid;
int dx[] = {-1, 1, 0, 0}; // 상하좌우 이동
int dy[] = {0, 0, -1, 1};

pair<int, int> findNextBFS(int start_x, int start_y) {
    int max_value = -1;
    pair<int, int> best_position = {-1, -1};

    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    bool visited[100][100] = {false};
    visited[start_x][start_y] = true;

    while (!q.empty()) {
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                visited[nx][ny] = true;
                
                if (grid[nx][ny] < grid[start_x][start_y]) {
                    if (grid[nx][ny] > max_value) {
                        max_value = grid[nx][ny];
                        best_position = {nx, ny};
                    } else if (grid[nx][ny] == max_value) {
                        if (nx < best_position.first || (nx == best_position.first && ny < best_position.second)) {
                            best_position = {nx, ny};
                        }
                    }
                    q.push({nx, ny});
                }
            }
        }
    }

    return best_position;
}

int main() {
    cin >> n >> k;
    grid.assign(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int r, c;
    cin >> r >> c;
    r--; c--; // 0 인덱스로 조정

    for (int i = 0; i < k; i++) {
        pair<int, int> next_position = findNextBFS(r, c);

        if (next_position.first == -1 && next_position.second == -1) {
            break; // 이동할 위치가 없는 경우
        }

        r = next_position.first;
        c = next_position.second;
    }

    cout << r + 1 << " " << c + 1 << endl; // 1 인덱스 기준으로 출력
    return 0;
}