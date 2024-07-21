#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int cnt1(0),cnt2(0);
    cin >> str;
    for(int i = 1; i<str.length();i++){
        if(str[i-1] == 'e' && str[i] == 'e'){
            cnt1++;
        }
    }
    
    for(int i = 1; i<str.length();i++){
        if(str[i-1] == 'e' && str[i] == 'b'){
            cnt2++;
        }
    }
    cout <<cnt1<<' '<<cnt2;
    return 0;
}