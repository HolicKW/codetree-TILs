#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    cin >> str >> a;
    int cnt = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == a){
            cout << cnt;
            break;
        }
        cnt++;

        if(i == str.length()-1 && str[i] != a){
            cout << "No";
        }
    }
    return 0;
}