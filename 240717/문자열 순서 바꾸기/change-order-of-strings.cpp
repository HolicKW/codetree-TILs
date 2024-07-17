#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s,t;
    string temp;
    cin >> t;
    cin >> s;
    temp = s;
    s = t;
    t = temp;
    cout << t << '\n' << s;
    return 0;
}