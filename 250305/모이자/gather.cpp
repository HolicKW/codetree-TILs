#include <iostream>
#include <climits>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i<n;i++){
        int result = 0;
        for(int j = 0;j<n;j++){
            if(i==j) continue;
            result += arr[j] * abs(j-i);
        }
        ans = min(ans,result);
    }

    cout << ans;
    return 0;
}