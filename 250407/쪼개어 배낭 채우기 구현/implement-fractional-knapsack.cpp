#include <iostream>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;

pair<double, int> gem[100000];
double a, b;
int n;
double m;

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        gem[i].first = b / a; // 무게당 가격
        gem[i].second = a;
    }

    sort(gem, gem + n, greater<>());

    double ans = 0;
    for(int i = 0; i < n; i++){
        if(m >= gem[i].second){
            ans += gem[i].first * gem[i].second;
            m -= gem[i].second;
        } else {
            ans += gem[i].first * m;
            break;
        }
    }

    cout << fixed << setprecision(3) << ans;
    return 0;
}
