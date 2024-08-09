#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin >> n >> m >>k;
    int arr[n] = {0,};
    for(int i = 0; i<m; i++){
        int a;
        cin >> a;
        arr[a]++;
    
    }

    for(int i = 0; i<n; i++){
        if(arr[i] >= k){
            cout << i;
            break;
        }
        else if(i == n-1 && arr[i] <=k){
            cout << -1;
        }
    }

    return 0;
}