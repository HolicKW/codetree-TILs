#include <iostream>
using namespace std;

int n, m;

// 범위 체크 함수
bool inrange(int x, int y, int n_range, int m_range) {
    return (x >= 0 && x < n_range && y >= 0 && y < m_range);
}

int main() {
    int dir = 0;  // 초기 방향 설정: 오른쪽(0)
    int dy[4] = {1, 0, -1, 0};  // y 방향 이동: 아래, 오른쪽, 위, 왼쪽
    int dx[4] = {0, 1, 0, -1};  // x 방향 이동: 아래, 오른쪽, 위, 왼쪽

    cin >> n >> m;
    int arr[100][100] = {0};  // 최대 100x100 크기의 배열로 선언, 0으로 초기화

    int x = 0, y = 0;  // 시작 좌표
    arr[x][y] = 1;  // 첫 번째 위치에 1 배치

    for (int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 범위를 벗어나거나 이미 숫자가 있으면 방향 전환
        if (!inrange(nx, ny, n, m) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;  // 방향을 시계방향으로 전환
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;  // 새로운 위치로 업데이트
        y = ny;
        arr[x][y] = i;  // 새로운 위치에 값 배치
    }

    // 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}