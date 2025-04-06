#include <iostream>
#include <climits>
using namespace std;

int n, k;

long long ispossible(long long target) {
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += min((long long)n, target / i);
    }
    return sum;
}

int main() {
    cin >> n >> k;
    
    long long left = 1;
    long long right = 1e12;  // 충분히 큰 수
    long long ans = LLONG_MAX;

    while(left <= right) {
        long long mid = (left + right) / 2;
        if(ispossible(mid) >= k) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << ans;
    return 0;
}
