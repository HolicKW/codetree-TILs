#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100000
int n,k;
int arr[MAX];
int main() {
    // Please write your code here.
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int j = n-1;
    int cnt = 0;
    for(int i = 0; i<n;i++){
        while(j != 0 && arr[i] + arr[j] > k){
            j--;
        }

        if(j <= i){
            break;
        }
        
        cnt = j-i;
    }

    cout <<cnt;
    return 0;
}