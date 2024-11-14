#include <iostream>
using namespace std;
int arr[20][20];
int n;
int dx[4] = {-1,-1,1,1};
int dy[4] = {1,-1,-1,1};

bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}
int findMax(int x, int y){
    int sum = arr[x][y];
    int i = 0;
    int nx = x, ny = y;
    for (int i = 0; i < 4; ++i) {  // 4개의 대각선 방향을 각각 계산

        while (true) {
            nx += dx[i];
            ny += dy[i];

            if (inRange(nx, ny)) {
                sum += arr[nx][ny];
            } else {
                break; // 범위를 벗어나면 해당 방향 종료
            }
        }
    }
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int result = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           result = max(result,findMax(i,j));
           
        }
    }

    cout<<result;
    return 0;
}