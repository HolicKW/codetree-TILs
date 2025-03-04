#include <iostream>
using namespace std;

char arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i] == 'C' && arr[j] == 'O' && arr[k] == 'W'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}