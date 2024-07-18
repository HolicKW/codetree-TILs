#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int a = 0; a<2; a++){
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n; j++){
                cout <<'*';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}