#include <iostream>
#include <string>
#include <climits>

using namespace std;

string str;

int main() {
    int n;
    cin >> n;
    cin >> str;

    int ans = 0; 

    for (int i = 0; i < n; i++) {
        if (str[i] == '1') continue;
        str[i] = '1'; 
        int min_dis = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (str[j] == '1') {
                for (int k = j + 1; k < n; k++) {
                    if (str[k] == '1') {
                        min_dis = min(min_dis, k - j);
                        break; 
                    }
                }
            }
        }
        if (min_dis != INT_MAX) {
            ans = max(ans, min_dis);
        }
        str[i] = '0'; // 원상 복구
    }

    cout << ans << '\n';
    return 0;
}
