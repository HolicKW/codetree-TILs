#include <iostream>
#include <algorithm>
using namespace std;
int a[101];
int b[101];
int tmp[101];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    for(int j = 0; j<m; j++){
        cin >> b[j];
    }
    sort(b,b+m);
    int cnt = 0;

    for(int i = 0; i<=n-m;i++){
        for(int j = 0; j<m;j++){
            tmp[j]= a[i+j];
        }
        sort(tmp,tmp+m);

        bool issame = true;
        for(int j = 0; j<m;j++){
            if(tmp[j]!=b[j]){
                issame = false;
                break;
            }
        }

        if(issame){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}