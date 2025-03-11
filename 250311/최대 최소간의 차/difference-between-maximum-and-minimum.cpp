#include <iostream>
#include <climits>
using namespace std;

int arr[101];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 0 ; i<n;i++){
        cin >> arr[i];
    }
    int cost = INT_MAX;
    for(int i = 1; i<=10000;i++){
        int sum =0;
        for(int j = 0;j<n;j++){
            if(arr[j]>=i && arr[j] <=i+k){
                continue;
            }
            else if(arr[j] < i){
                sum += i - arr[j];
            }
            else{
                sum += arr[j] - (i+k);
            }
        }

        cost = min(cost,sum);

    }

    cout << cost;

    return 0;
}