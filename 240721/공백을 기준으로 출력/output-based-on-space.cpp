#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str,str2;
    getline(cin,str);
    getline(cin,str2);
    string str3 = str + str2;
    for(int i =0;i<str3.length();i++){
        if(str3[i] != ' '){
            cout <<str3[i];
        }
        
    }
    return 0;
}