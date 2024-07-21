#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1,str2;
    cin >> str1;
    cin >> str2;
    string str3 = str1 + str2;
    string str4 = str2 + str1;
    if(str3 == str4){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}