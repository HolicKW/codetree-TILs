#include <iostream>
#include <algorithm>
using namespace std;

int n,k;
int arr[101];
int main() {
    // Please write your code here.
    cin >> n >> k;
    for(int i = 0; i<n ;i++){
        int a1,b1;
        cin >> a1 >> b1;
        arr[b1] = a1;
    }
    int result = 0;
    for(int i = 0; i<101;i++){
        int ans = arr[i];
        for(int j = 1; j<=k; j++){
            if(i+j<101){
                ans += arr[i+j];
            }
            if(i-j>=0){
                ans += arr[i-j];
            }
        }
        result = max(result,ans);
    }

    cout << result;
    return 0;
}