#include <iostream>
#include <string>
using namespace std;

string str1,str2;
void strf(string str1,string str2){
    if(str1.find(str2) != string::npos){
        cout << str1.find(str2);
    }
    else{
        cout << -1;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str1 >> str2;
    strf(str1,str2);
    return 0;
}