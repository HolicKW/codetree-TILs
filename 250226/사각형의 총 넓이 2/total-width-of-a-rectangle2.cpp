#include <iostream>
using namespace std;

int arr[201][201];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=100; x2 +=100; y1+=100; y2+=100;

        for(int i = x1; i<x2;i++){
            for(int j = y1; j<y2;j++){
                arr[i][j]++;
            }
        }
    }
    int ans = 0;
    for(int i =0;i<201;i++){
        for(int j =0;j<201;j++){
            if(arr[i][j]>=1){
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}