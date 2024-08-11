#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    int arr[n] = {0,};
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int result(0);

    for(int i = 0; i<=n-k;i++){
        int max_re = 0;
        for(int j = i; j<i+k; j++){
            max_re += arr[j];
        }
        result = max(result,max_re);
        
    }

    cout << result;
    return 0;
}