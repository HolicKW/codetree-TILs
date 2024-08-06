#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[200] = {0,};
    int cnt(0);
    for(int i =0; i<n;i++){
        int a,b;
        cin >> a >> b;
        for(int j = a; j < b; j++){
            arr[j+100]++;
        }
    }
    int max(0);
    for(int i = 0; i<200; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}