#include <iostream>
#include <cmath>
using namespace std;
int a[10];
int b[10];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 1;i<=10000;i++){
        for(int j = 0; j<n;j++){
            int sum = i*pow(2,j+1);
            if(sum<a[j] || sum>b[j]){
                break;
            }

            if(j==n-1){
                cout << i;
                return 0 ;
            }
        }
    }
    return 0;
}