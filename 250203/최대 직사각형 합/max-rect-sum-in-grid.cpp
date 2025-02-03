#include <iostream>
using namespace std;

int arr[301][301];
int sum[301][301];
int n;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            sum[i][j] = arr[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]; 
        }
    }
    int result =0;
    for(int a1 = 1; a1<=n;a1++){
        for(int b1= 1; b1<=n;b1++){
            for(int a2=a1;a2<=n;a2++){
                for(int b2=b1; b2<=n;b2++){
                    int ans = sum[a2][b2] - sum[a1-1][b2] - sum[a2][b1-1] + sum[a1-1][b1-1];
                    result = max(result,ans);
                }
            }
        }
    }
    cout <<result;
    return 0;
}