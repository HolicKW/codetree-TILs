#include <iostream>
using namespace std;

int arr[100];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n>> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    for(int i = 1; i<10001;i++){
        int sum = 0;
        int mcnt = 0;
        for(int j = 0; j<n; j++){
            if(arr[j] > i){
                break;
            }
            sum += arr[j];
            if(sum > i){
                sum = arr[j];
                mcnt++;
            }

            if((mcnt == m-1 && j == n-1) ||(mcnt == m-2 &&  j == n-1 && sum <= i)){
                cout << i;
                return 0;
            }
        }

    }
    return 0;
}