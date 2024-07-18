#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[11];
    for(int i = 0 ;i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0 ;i<n;i++){
        if(arr[i]%2==1 && arr[i] % 3 == 0){
            cout << arr[i] <<endl;
        }
    }
    return 0;
}