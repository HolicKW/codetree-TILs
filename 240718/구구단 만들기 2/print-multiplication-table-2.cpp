#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    for(int j = 2; j<=8; j+=2){
        for(int i = b; i>=a; i--){
            
            if(i == 2){
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