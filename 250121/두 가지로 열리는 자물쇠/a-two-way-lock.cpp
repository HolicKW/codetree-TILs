#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            for(int k = 1; k<=n; k++){
                if((abs(a1 - i) % n <= 2 || abs(a1 - i) % n >= abs(n-2))
                && (abs(b1-j) % n <= 2 || abs(b1-j) % n >= abs(n-2))
                && (abs(c1-k)% n <= 2 || abs(c1-k) % n >= abs(n-2))){
                    cnt++;
                }
                
                else if((abs(a2 - i) % n <= 2 || abs(a2 - i) % n >= abs(n-2))
                && (abs(b2-j) % n <= 2 || abs(b2-j) % n >= abs(n-2))
                && (abs(c2-k)% n <= 2 || abs(c2-k) % n >= abs(n-2))){
                    cnt++;
                }

                
            }
        }
    }

    cout << cnt;
    return 0;
}