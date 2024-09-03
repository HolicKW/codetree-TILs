#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    bool check = false;
    for(int i = 0; i<s.length(); i++){
        if(s.length() == 1 && s == '1'){
            cout << 0;
        }
        if(!check){
            if(s[i] == '0'){
                s[i] = '0' + '1' - s[i];
                check = true;
            }
        }
        else if(!check && i == s.length()-1){
            for(int i = s.length()-1; i>=0;i--){
                if(s[i] == '1'){
                    s[i] = '0' + '1' - s[i];
                    break;
                }
            }
        }
    }
    int result(0);
    for(int i = 0; i<s.length(); i++){
        result = result * 2 + (s[i]-'0');
    }
    cout << result;
    
    return 0;
}