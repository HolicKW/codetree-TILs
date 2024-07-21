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
        if(str1.substr(i,str2.length()) == str2 ){
            cnt++;
        }
    }

    if(cnt == 0){
        cout << "-1";
    }
    else if(str1 == str2){
        cout << "0";
    }
    else{
        cout << cnt;
    }

    return 0;
}