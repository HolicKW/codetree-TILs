#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int wh_cnt(0);
    int bl_cnt(0);
    int arr[200000] ={0,};
    int loc = 100000;
    for(int i = 0; i<n; i++){
        int a;
        char b;
        cin >> a >> b;
        if(b == 'L'){
            for(int j = 0; j<a; j++){
                arr[loc] = 1;
                if(j != a-1){
                    loc--;
                }
            }
        }
        else if(b == 'R'){
            for(int j = 0; j<a; j++){
                arr[loc] = 2;
                if(j != a-1){
                    loc++;
                }
            }
        }
    }

    for(int i = 0; i<200000; i++){
        if(arr[i] == 1){
            wh_cnt++;
        }
        else if(arr[i] == 2){
            bl_cnt++;
        }
    }

    cout << wh_cnt << ' ' << bl_cnt;
    return 0;
}