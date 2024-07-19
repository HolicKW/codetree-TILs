#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        
    }

    for(int i = 0; i<n;i++){
        if(arr[i] == 2){
            cnt++;
        }
        if(cnt ==3){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}