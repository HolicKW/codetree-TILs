#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string s;
    int arr[8];
    int result(0);
    cin >> s;
    for(int i = 0; i<s.length(); i++){
        arr[i] = s[i] -'0';
    }
    for(int i = 0; i<s.length(); i++){
        result = result * 2 + arr[i];
    }

    cout << result;

    return 0;
}