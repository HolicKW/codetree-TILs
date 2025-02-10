#include <iostream>
using namespace std;
#define MAX 100000
int n;
int arr[MAX+1];
int L[MAX+1];
int R[MAX+1];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }

    L[1] = arr[1];
    L[2] = max(arr[1],arr[2]);
    for(int i = 3; i <= n; i++){
        L[i] = max(L[i-1], L[i-2]+ arr[i]);
    }

    R[n] = arr[n];
    R[n-1] = max(arr[n+1],arr[n]);
    for(int i = n - 2; i >= 1; i--){
        R[i] =max(R[i+1],R[i+2]+arr[i]);
    }
    int result= 0;
    for(int i = 1; i<=n-2;i++){
        result = max(result,L[i]+R[i+2]);
    }

    cout << result;
    return 0;
}