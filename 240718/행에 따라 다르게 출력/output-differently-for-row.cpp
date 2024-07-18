#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int result = 0;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 0; j<n; j++){
            if(i%2 == 1){
                result++;
            }
            if(i%2 == 0){
                result +=2;
            }
            cout <<result <<' ';
        }
        cout << endl;
    }
    return 0;
}