#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[101];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i= 0; i<n;i++){
        cin >> arr[i];
    }
    int result=0;
    for(int i = 0; i<n-2; i++){
        int ans;
        for(int j = i+2; j<n;j++){
            ans = arr[i] + arr[j];
            result = max(result,ans);   
        }
    }

    cout << result;
    return 0;
}