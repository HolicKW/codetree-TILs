#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin >> n >> t;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int cnt(0);
    int max(0);
    for(int i = 0; i<n; i++){
        if(arr[i]>t){
            cnt++;
        }
        else{
            if(cnt>max){
                max =cnt;
            }
            cnt = 0;
        }
    }

    if(cnt>max){
        max = cnt;
    }
    cout << max;
    return 0;
}