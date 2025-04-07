#include <iostream>
using namespace std;

int n;
int arr[100000];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = arr[0];
    int sum = 0;
    for(int i = 0; i<n;i++){
        if(sum>sum+arr[i]){
            sum = 0;
            continue;
        }

        sum += arr[i];
        
        if(sum > ans){
            ans = sum;
        }
        

    }

    cout << ans;
    return 0;
}