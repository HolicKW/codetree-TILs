#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    
    cin >> n >> m;
    int arr[10][10] = {0,};
    for(int i = 0; i<m; i++){
        int a,b;
        cin >> a >>b;
        arr[a-1][b-1] = a*b;
    }

    for(int i =0; i<n;i++){
        for(int j = 0; j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout << endl;
    }

    return 0;
}