#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int cnt(0);
    for(int i = 0; i<str1.length(); i++){
        if(str1.substr(i,str2.length()-1) == str2){
            cnt = i;
            break;
        }

    }

    if(cnt == 0){
        cout << "-1";
    }
    else{
        cout << cnt;
    }

    return 0;
}