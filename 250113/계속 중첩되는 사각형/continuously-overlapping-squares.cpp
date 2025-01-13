#include <iostream>
using namespace std;
int arr[202][202];
int offset = 100;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=offset;
        x2+=offset;
        y1+=offset;
        y2+=offset;

        for(int j = x1; j<x2; j++){
            for(int k = y1; k<y2; k++){
                arr[j][k] = i%2;
            }
        }
    }
    int result = 0;
    for(int i = 0; i<200;i++){
        for(int j = 0; j<200;j++){
            if(arr[i][j]==1){
                result++;
            }
        }
    }

    cout << result;
    return 0;
}