#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,n;
    cin >> n;
    cin >> a >> b >> c;
    int cnt = 0;
    for(int i= 1; i<=n;i++){
        for(int j=1; j<=n;j++){
            for(int k =1; k<=n;k++){
                if((i-a > 2) && (j-b > 2) && (k-c >2)){
                    cnt++;
                }
            }
        }
    }
    int result = n*n*n - cnt;
    cout << result;
    return 0;
}