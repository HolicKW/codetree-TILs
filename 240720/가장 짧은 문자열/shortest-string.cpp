#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;
    int a(str1.length());
    int b(str2.length());
    int c(str3.length());
    int result = max({a,b,c}) - min({a,b,c});
    cout << result;
}