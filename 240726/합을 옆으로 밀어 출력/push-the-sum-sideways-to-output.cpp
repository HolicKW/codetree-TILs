#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int result(0);
    string str;
    for(int i = 0; i<n;i++){
        int a = 0;
        cin >> a;
        result += a;
    }
    str = to_string(result);
    str = str.substr(1,str.length()-1) + str[0];
    cout << str;
    return 0;
}