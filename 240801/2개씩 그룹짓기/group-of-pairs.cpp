#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int nn =2*n;
    int arr[nn];
    for(int i = 0; i<nn;i++){
        cin >> arr[i];
    }
    sort(arr,arr+nn);
    int max = 0;
    for(int i = 0; i<nn-1; i++){
        if(arr[i]+arr[nn-1-i]>max){
            max = arr[i] + arr[nn-1-i];
        }
    }

    cout << max;
    return 0;
}