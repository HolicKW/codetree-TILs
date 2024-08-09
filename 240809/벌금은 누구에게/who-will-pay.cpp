#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin >> n >> m >>k;
    int arr[101] = {0,};
    int a;
    for(int i = 0; i<m; i++){
        cin >> a;
        arr[a]++;
        //cout << arr[a] << endl;
    }

    for(int i = 1; i<=n; i++){
        if(arr[i] >= k){
            cout << i;
            break;
        }
        else if(i == n && arr[i] <=k){
            cout << -1;
        }
    }

    return 0;
}