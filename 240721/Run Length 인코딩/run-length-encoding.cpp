#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2;
    int cnt = 0;
    cin >> str;

    char x = str[0];
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != x) {
            str2 += x;
            str2 += to_string(cnt);  // 숫자를 문자열로 변환하여 추가
            x = str[i];
            cnt = 0;
        }
        cnt++;
        if (i == str.length() - 1) {
            str2 += x;
            str2 += to_string(cnt);  // 마지막 문자의 개수 추가
        }
    }

    cout << str2.length() << endl << str2 << endl;

    return 0;
}