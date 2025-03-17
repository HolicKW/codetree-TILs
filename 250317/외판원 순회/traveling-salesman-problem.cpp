#include <iostream>
#include <vector>
#include <climits>
#define MAX 10
using namespace std;

int n;
int arr[MAX][MAX];
bool visited[MAX];
vector<int> vec;
int ans = INT_MAX;

int calc() {
    int sum = 0;
    for (int i = 0; i < vec.size() - 1; i++) {
        sum += arr[vec[i]][vec[i + 1]];
    }
    sum += arr[vec.back()][vec[0]]; // 마지막 도시에서 출발 도시로 복귀하는 비용 추가
    return sum;
}

void sol(int city, int cnt) {   //city 에서 i번째 도시를 방문
    if (cnt == n) {
        if (arr[city][0] == 0) return; 
        ans = min(ans, calc());
        return;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] || arr[city][i] == 0) continue;
        visited[i] = true;
        vec.push_back(i);
        sol(i, cnt + 1);
        vec.pop_back();
        visited[i] = false;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    visited[0] = true; 
    vec.push_back(0);
    sol(0, 1);
    cout << ans;
    return 0;
}
