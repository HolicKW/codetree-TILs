#include <iostream>
using namespace std;
#define MAX 1000000
int arr[MAX+1];
int sum[MAX+1];
int main() {
    // Please write your code here.
    int n,q;
    cin >> n >> q;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        arr[num] = 1;
    }

    for(int i = 1; i<MAX;i++){
        if(arr[i] == 1){
            sum[i] = sum[i-1] + arr[i];
        }
        else{
            sum[i] = sum[i-1];
        }
    }

    for(int i = 0; i<q;i++){
        int a,b;
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << endl;
    }
    return 0;
}