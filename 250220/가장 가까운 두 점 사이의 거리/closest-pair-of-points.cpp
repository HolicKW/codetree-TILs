#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
pair<int, int> arr[101];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int ans = INT_MAX; // 최소 거리의 제곱을 저장할 변수

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = arr[i].first - arr[j].first;
            int dy = arr[i].second - arr[j].second;
            int dist_sq = dx * dx + dy * dy; // 거리의 제곱 계산
            ans = min(ans, dist_sq);
        }
    }

    cout << ans;
    return 0;
}
