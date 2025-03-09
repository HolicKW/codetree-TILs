#include <iostream>
using namespace std;

int arr[3][3];
int main() {
    // Please write your code here.
    for(int i = 0 ;i<3;i++){
        for(int j =0;j<3;j++){
            char c;
            cin >> c;
            arr[i][j] = c-'0';
        }
    }
    int ans = 0;
    for(int i = 0; i<3;i++){
        int count[10] = {0,};
        int cnt=0;
        for(int j = 0; j<3;j++){
            count[arr[i][j]]++;
            if(count[arr[i][j]] == 1){
                cnt++;
            }
        }
        if(cnt == 2){
            ans++;
        }
    }

    for(int i = 0; i<3;i++){
        int count[10] = {0,};
        int cnt=0;
        for(int j = 0; j<3;j++){
            count[arr[j][i]]++;
            if(count[arr[j][i]] == 1){
                cnt++;
            }
        }
        if(cnt == 2){
            ans++;
        }
    }

    for(int i = 0; i<2;i++){
        int count[10] = {0,};
        int cnt = 0;
        if(i==0){
            for(int j = 0; j<3;j++){
                count[arr[j][j]]++;
                if(count[arr[j][j]] == 1){
                    cnt++;
                }
            }
        }
        else{
            for(int j = 0; j<3;j++){
                count[arr[j][2-j]]++;
                if(count[arr[j][2-j]] == 1){
                    cnt++;
                }
            }
        }
        if(cnt == 2){
            ans++;
        }
    }

    cout << ans;
    return 0;
}