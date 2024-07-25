#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] -'a' + 'A';
            cout << str[i];
            continue;
        }
        else if(str[i]>='A' && str[i] <='Z')
        {
            str[i] = str[i] - 'A' + 'a';
            cout << str[i];
        }
    }
    return 0;
}