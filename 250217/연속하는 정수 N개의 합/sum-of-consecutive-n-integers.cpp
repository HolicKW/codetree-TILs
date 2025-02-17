#include <iostream>
using namespace std;
#define MAX 100000
int n,m;
int arr[MAX];
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    int j = 0;
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i<n;i++){
        while(j<n && sum < m){
            sum += arr[j];
            j++;
        }

        if(sum == m){
            cnt++;
        }
        sum -= arr[i];
    }

    cout <<cnt;
    return 0;
}