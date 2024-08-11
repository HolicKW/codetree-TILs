#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n][n] = {0,};
    int result(0);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-2; j++){
            result = max(result,arr[i][j]+arr[i][j+1]+arr[i][j+2]);
        }
    }

    cout << result;
    return 0;
}