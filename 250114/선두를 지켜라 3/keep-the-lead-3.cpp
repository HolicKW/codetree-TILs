#include <iostream>
using namespace std;
int n,m;
int a[1000001] = {0};
int b[1000001] = {0};
char glory[1001];
int main() {
    // Please write your code here.
    cin >> n >> m;
    int idx_a = 1;
    int idx_b = 1;
    int v1,t1,v2,t2;
    for(int i = 0; i<n;i++){
        cin >>v1>>t1;
        for(int j = 1; j<=t1;j++){
            a[idx_a] = a[idx_a-1] + v1;
            idx_a++;
        }
    }

    for(int i = 0; i<m;i++){
        cin >>v2>>t2;
        for(int j = 1; j<=t2;j++){
            b[idx_b] = b[idx_b-1] + v2;
            idx_b++;
        }
    }

    int cnt = 0;
    for(int i = 1; i<idx_a; i++){
        if(a[i] > b[i]){
            glory[i] = 'a';
        }
        else if(a[i] < b[i]){
            glory[i] = 'b';
        }
        else if(a[i] == b[i]){
            glory[i] = 'c';
        }
    }

    for(int i = 2; i<=idx_a; i++){
        if(glory[i] != glory[i-1]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}