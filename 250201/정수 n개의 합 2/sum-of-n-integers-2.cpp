#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int sum[100000];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for(int i = 1; i<n;i++){
        sum[i] = sum[i-1] + arr[i];
    }
    int result = 0;
    for(int i = 0; i<n-k; i++){
        result = max(result,sum[i+k] - sum[i]);
    }

    cout << result;

    
    return 0;
}