#include <iostream>
#include <string>
#include <climits>

using namespace std;

string str;

int main() {
    int n;
    cin >> n;
    cin >> str;

    int ans = 0; // 초기값을 0으로 설정

    for (int i = 0; i < n; i++) {
        if (str[i] == '1') continue; // 원래 '1'이면 건너뜀

        str[i] = '1'; 
        int max_min = 21; 

        for (int j = 0; j < n; j++) {
            if (str[j] == '1') {
                int min_dis = INT_MAX;

                for (int k = j + 1; k < n; k++) {
                    if (str[k] == '1') {
                        min_dis = min(min_dis, k - j);
                        break; // 가장 가까운 거리만 찾으면 되므로 break
                    }
                }

                if (min_dis != INT_MAX) {
                    max_min = min(max_min, min_dis);
                }
            }
        }

        ans = max(ans, max_min);
        str[i] = '0'; // 원상 복구
    }

    cout << ans << '\n';
    return 0;
}
