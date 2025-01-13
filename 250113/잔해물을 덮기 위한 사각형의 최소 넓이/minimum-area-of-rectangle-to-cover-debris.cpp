#include <iostream>
#include <algorithm>
using namespace std;
int offset = 1000;
int arr[2002][2002] = {0,};

int main() {
    // Please write your code here.
    int x1,y1,x2,y2;
    int a1,b1,a2,b2;
    for(int i = 0; i<2;i++){
        cin >> x1 >>y1 >> x2>> y2;
        x1 += offset;
        x2 += offset;
        y1 += offset;
        y2 += offset;
        if(i==0){
            a1 = x1;
            b1 = y1;
            a2 = x2;
            b2 = y2;
        }
        for(int j = x1; j<x2; j++){
           for(int k = y1; k<y2; k++){
                arr[j][k]++;
            }
        }
    }
    int Max_x = 0;
    int Max_y = 0;
    for(int i = a1; i<a2;i++){
        int cnt = 0;
        for(int j = b1; j<b2;j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
        Max_x = max(Max_x,cnt);
    }

    for(int i = a1; i<a2;i++){
        int cnt = 0;
        for(int j = b1; j<b2;j++){
            if(arr[j][i] == 1){
                cnt++;
            }
        }
        Max_y = max(Max_y,cnt);
    }
    cout << Max_x*Max_y;
    return 0;
}