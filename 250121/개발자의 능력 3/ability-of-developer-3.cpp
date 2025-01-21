#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int result = 0;
    int ans = INT_MAX;
    int arr[6];
    for(int i = 0; i<6 ;i++){
        cin >> arr[i];
        result += arr[i];
    }

    for(int i = 0; i<4; i++){
        for(int j = i+1; j<6; j++){
            for(int k =j+1;k<6;k++){
                int tmp = arr[i] + arr[j] +arr[k];
                int tmp2 = result - tmp;
                ans = min(ans,abs(tmp2-tmp));
            }
        }
    }
    cout << ans;
    return 0;
}