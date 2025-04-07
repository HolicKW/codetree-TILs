#include <iostream>
using namespace std;

int coin[10];
int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        cin >> coin[i];
    }
    int coin_num = 0;
    for(int i = n-1; i>=0;i--){
        coin_num += k/coin[i];
        k = k%coin[i];
        if(k==0) break;
    }
    cout << coin_num;
    return 0;
}