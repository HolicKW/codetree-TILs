#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    int cnt = 0;
    getline(cin, str);
    cin >> a;
    for(int i = 0; i<str.length();i++){
        if(str[i] == a){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}