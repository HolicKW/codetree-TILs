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
        sum += arr[i];

        if(sum > ans){
            ans = sum;
        }
        else if(sum < 0){
            sum = 0;
        }
        

    }

    cout << ans;
    return 0;
}