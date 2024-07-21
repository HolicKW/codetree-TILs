#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int cnt1,cnt2;
    cin >> str;
    if(str.find("ee") != string::npos){
        cnt1++;
    }
    
    if(str.find("eb") != string::npos){
        cnt2++;
    }
    cout <<cnt1<<' '<<cnt2;
    return 0;
}