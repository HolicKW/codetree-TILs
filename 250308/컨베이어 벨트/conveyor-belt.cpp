#include <iostream>
using namespace std;
int a[201];
int b[201];
int n;
int main() {
    // Please write your code here.
    int t;
    cin >> n >> t;
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    for(int i = 0; i<n;i++){
        cin >> b[i];
    }

    for(int i = 0; i<t;i++){
        int a_temp = a[n-1];
        int b_temp = b[n-1];
        for(int i = n-1; i>=1;i--){
            a[i] = a[i-1];
        }
        a[0] = b_temp;

        for(int i = n-1;i>=1;i--){
            b[i] = b[i-1];
        }
        b[0] = a_temp;
    }
    for(int i = 0; i<n;i++){
        cout << a[i]<< ' ';
    }
    cout << endl;
    for(int i = 0; i<n;i++){
        cout << b[i]<< ' ';
    }
    
    return 0;
}