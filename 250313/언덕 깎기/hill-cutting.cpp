#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int arr[1001];
int main() {
    // Please write your code here.
    int n;
    int k = 17;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i<=100;i++){
        int sum = 0;
        for(int j = 0; j<n;j++){
            if(arr[j] > i+k){
                sum+= (arr[j]-i-k) *(arr[j] - i-k);
            }
            else if(arr[j] < i){
                sum+= (arr[j]-i) *(arr[j] - i);
            }
            
        }
        ans = min(ans,sum);
    }

    cout << ans;

    return 0;
}