#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q;
    cin >> n >> q;
    int arr[100001];
    int a[100001];
    int b[100001];
    int L[100001];
    int R[100001];
    for(int i = 1; i<=n ;i++){
        cin >> arr[i];
    }
    for(int i =0 ;i<q;i++){
         cin >> a[i] >> b[i];
    }

    L[1] = arr[1]; R[n] = arr[n];

    for(int i= 2;i<=n;i++){
        L[i] = max(arr[i],L[i-1]);
    }
    for(int i = n-1;i>=1;i--){
        R[i] = max(arr[i],R[i+1]);
    }

    for(int i = 0;i<q;i++){
        int result = 0;
        int left = a[i];
        int right = b[i];
        result = max(L[left-1],R[right+1]);
        cout << result << endl;
    }
    return 0;
}