#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    for(int j = 2; j<=8; j+=2){
        int cnt = 0;
        for(int i = b; i>=a; i--){
            cnt++;
            if(cnt == (b-a)+1){
                cout << i << " * " <<  j << " = " << i*j;
            }
            else{
                cout << i << " * " <<  j << " = " << i*j << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}