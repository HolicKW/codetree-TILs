#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    string a1 = to_string(a+b);
    for(int i = 0 ;i<a1.length(); i++){
        if(a1[i] == '1'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}