#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int min(10000000);
    for(int i = 0 ; i<n; i++){
        int dis(0);
        for(int j = 0; j<n; j++){
            dis += arr[j] * abs((j-i));
        }
        if(min > dis){
            min = dis;
        }
    }
    cout << min;
    return 0;
}