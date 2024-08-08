#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int max=1;
    int cnt(1);
    for(int i = 0; i<n; i++){
        if(((arr[i]>0) && (arr[i+1]>0)) || ((arr[i] < 0) && (arr[i+1]<0))){
            cnt++;
        }
        else {
            if(cnt > max){
                max = cnt;
            }
            cnt = 1;
        }
    }
    if(cnt > max){
        max = cnt;
    }
    cout << max;

    return 0;
}