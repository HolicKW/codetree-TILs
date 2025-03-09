#include <iostream>
#include <climits>
using namespace std;

int arr[100];
int main() {
    // Please write your code here.
    int n;
    int ans = INT_MAX;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n;i++){
        arr[i] = arr[i] * 2;
        for(int j = 0; j<n;j++){
            int cnt = 0;
            int sum_arr[99] ={0};
            for(int k = 0; k<n;k++){
                if(j == k) continue;
                sum_arr[cnt++] = arr[k];
            }

            int sum = 0;
            for(int k = 0; k<cnt-1;k++){
                sum += abs(sum_arr[k+1] - sum_arr[k]);
            }
            ans = min(ans,sum);
        }
        arr[i] /= 2;
    }

    cout << ans;
    return 0;
}