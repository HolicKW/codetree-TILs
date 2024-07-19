#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int ab= n;
    int num = 1;
    cin >> n;
    int arr[n][n];
    bool up = true;
    for(int j = n-1; j>=0; j--){
        if(up){
            for(int i=n-1;i>=0;i--){
                arr[i][j] = num;
                num++;
            }
            up = false;
        }
        else{
            for(int i=0; i<n;i++){
                arr[i][j] = num;
                num++;
            }
            up = true;
        }
        
    }

      for(int i = 0;i<n;i++){
        for(int j =0; j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout <<endl;
      }

        
    return 0;
}