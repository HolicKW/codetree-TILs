#include <iostream>
using namespace std;

int a[100],b[100];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<m;i++){
        cin >> a[i] >> b[i];
    }
    int ans = 0;
    for(int i = 0 ; i<m;i++){
        int cnt = 0;
        int x = a[i], y = b[i];
        for(int j = 0; j<m;j++){
            if(x == a[j] && y == b[j]){
                cnt++;
            }
            else if(x == b[j] && y == a[j]){
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}