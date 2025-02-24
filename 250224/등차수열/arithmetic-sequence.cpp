#include <iostream>
using namespace std;
int arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    int k = 0;
    int ans =0;
    for(int i =0; i<n;i++){
        for(int j = i+1; j<n;j++){
            int cnt = 0;
            k= (arr[i] + arr[j])/2;
            for(int a = 0; a<n; a++){
                for(int b = a+1; b<n; b++){
                    if((abs(k-arr[a])) ==abs(arr[b]-k)){
                        cnt++;
                    }
                }
            }
            ans = max(ans,cnt);
        }

    }
    cout << ans;
    return 0;
}