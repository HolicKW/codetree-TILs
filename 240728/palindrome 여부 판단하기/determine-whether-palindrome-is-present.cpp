#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i<(len/2);i++){
        if(str[i] != str[len-i-1]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}