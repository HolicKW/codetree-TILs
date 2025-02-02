#include <iostream>
#include <climits>
using namespace std;

int arr[100001];
int sum[100001];
int a[100000];
int main() {
    // Please write your code here.
    int n,k,b;
    cin >> n >> k >> b;
    for(int i = 0; i<=n;i++){
        arr[i] = 1;
    }
    for(int i = 0; i<b;i++){
        int num;
        cin >> num;
        arr[num] = 0;
    }

    for(int i = 1; i<=n;i++){
        if(arr[i] == 1){
            sum[i] = sum[i-1] + 1;
        }
    }
    int result = INT_MAX;
    int right = 0;
    int left = 0;
    for(int i = 1; i<=n;i++){
        if(arr[i] == 0 && sum[i-1]>0 && sum[i+1]>0){
            left = sum[i-1];
            for(int j =i+1; j<=n; j++){
                if(sum[j] == 0){
                    right = sum[j-1];
                    break;
                }
            }
            result = min(result,k-left-right);
        }
    }

    cout << result;

    return 0;
}