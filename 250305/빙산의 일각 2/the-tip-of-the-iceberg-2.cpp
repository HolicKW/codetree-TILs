#include <iostream>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int max_height = 0;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        max_height = max(max_height,arr[i]);
    }
    int ans = 0;
    for(int i = 1; i<max_height; i++){
        int cnt = 0;
        for(int j = 0; j<n;j++){
            if(arr[j] > i && arr[j+1] <= i){
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}