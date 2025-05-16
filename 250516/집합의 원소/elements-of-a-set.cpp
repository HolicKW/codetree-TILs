#include <iostream>
using namespace std;

int n,m;
int uf[100001];



int Find(int n){
    if(uf[n] == n) return n;
    int r= Find(uf[n]);
    uf[n] = r;
    return r;
}
void Union(int a, int b){
    int x = Find(a);
    int y = Find(b);
    uf[x]=y;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 1; i<=n;i++){
        uf[i] = i;
    }
    for(int i = 0; i<m;i++){
        int num, a, b;
        cin >> num >> a >> b;
        if(num == 0){
            Union(a,b);
        }
        else{
            if(Find(a) == Find(b)){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl; 
            }
        }
    }
    return 0;
}