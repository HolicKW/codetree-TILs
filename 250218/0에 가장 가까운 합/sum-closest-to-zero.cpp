#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100000
int n;
int arr[MAX];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+n);
    int j = n-1;
    int result = INT_MAX;
    int ans = 0;
    for(int i = 0; i<n;i++){
        while(j>=i && arr[i]+arr[j]>0){
            result = min(result,abs(arr[i]+arr[j]));
            j--;
        }
    }

    cout << result;
    return 0;
}