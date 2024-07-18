#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,b;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        int result = 0;
        for(int i = a; i<=b; i++){
            if(i%2 == 0){
                result += i;
            }
        }
        cout << result << endl;
    }
    return 0;
}