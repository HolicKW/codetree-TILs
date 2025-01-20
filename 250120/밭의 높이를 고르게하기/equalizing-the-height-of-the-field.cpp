#include <iostream>
#include <climits>
using namespace std;
int n,h,t;
int arr[101];
int arr2[101] = {0};

int main() {
    // Please write your code here.
    cin >> n >> h >> t;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i<n;i++){
        if(arr[i] < h){
            arr2[i]++;
        }
    }

    for(int i = 0; i<=n-t; i++){
        int tmp = 0;
        for(int j = 0; j<t;j++){
            tmp += arr2[j];
        }
        ans = min(ans,tmp);
    }

    cout << ans;
    return 0;
}