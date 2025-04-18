#include <iostream>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;
#define MAX 100000

int n, m;
pair<long long, long long> line[MAX];

bool isPossible(long long mid){
    long long count = 0;
    long long last = -1e18;
    for(int i = 0; i < m; i++){
        long long start = line[i].first;
        long long end = line[i].second;
        
        long long pos = max(start, last + mid);
        while (pos <= end) {
            count++;
            last = pos;
            if (count >= n) return true;
            pos += mid;
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> line[i].first >> line[i].second;
    }

    sort(line, line + m);
    long long left = 1;
    long long right = 1e18;
    long long ans = 0;

    while (left <= right){
        long long mid = (left + right) / 2;
        if (isPossible(mid)){
            ans = max(ans, mid);
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
