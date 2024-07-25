#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int result = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] >='0' && str[i] <= '9'){
            result += (int)str[i]-48;
        }
    }

    cout << result;
    return 0;
}