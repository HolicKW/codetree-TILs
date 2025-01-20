#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
int n,h,t;
int arr[101];

int main() {
    // Please write your code here.
    cin >> n >> h >> t;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        arr[i] = abs(arr[i] - h);
    }
    int result = INT_MAX;

    for(int i = 0; i<=n-t; i++){
        int tmp = 0;
        for(int j = 0; j<t;j++){
            tmp += arr[i+j];
        }
        result = min(result,tmp);
    }
  
    cout << result;
    return 0;
}