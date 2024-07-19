#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    int min = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = arr[0] + arr[1];
    for(int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] < min){
            min = arr[i] - arr[i-1];
        }
    }
    cout << min;
    return 0;
}