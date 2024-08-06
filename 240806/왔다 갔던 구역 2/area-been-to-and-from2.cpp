#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[2000] = {0,};
    int loc = 1000;

    for(int i = 0; i<n; i++){
        int a;
        char b;
        cin >> a >> b;
        if(b == 'L'){
            for(int j = 0; j<a; j++){
                arr[loc]++;
                if(j == a-1){
                    continue;
                }
                else
                    loc--;
            }
        }
        else{
            for(int j =0; j<a; j++){
                arr[loc]++;
                if(j == a-1){
                    continue;
                }
                else
                    loc++;
            }
        }
    }
    int cnt(0);
    for(int i = 0; i<2000; i++){
        if(arr[i] >= 2){
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}