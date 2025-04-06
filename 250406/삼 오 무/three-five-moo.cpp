#include <iostream>
#include <climits>
using namespace std;

int n;

long long find_idx(long long target) {
    return target - (target / 3) - (target / 5) + (target / 15);
}

int main() {
    cin >> n;

    long long left = 1;
    long long right = 1e18;  // 충분히 큰 수 설정
    long long ans = LLONG_MAX;

    while(left <= right) {
        long long mid = (left + right) / 2;
        if(find_idx(mid) >= n) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
