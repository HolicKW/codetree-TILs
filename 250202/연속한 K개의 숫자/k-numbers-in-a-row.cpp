#include <iostream>
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
        a[i] = num;
    }

    for(int i = 1; i<=n;i++){
        if(sum[i] == 1){
            sum[i] = sum[i-1] + 1;
        }
    }
    int cnt = 0;
    for(int i =0;i<b;i++){
        arr[a[i]] = 1;
        cnt++;
        for(int j=1; j<=n;j++){
            sum[j] = sum[j-1]+1;
            if(sum[j] == k){
                cout << cnt;
                return 0;
            }
        }
    }

    return 0;
}