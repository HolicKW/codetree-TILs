#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputStr, targetStr;
    cin >> inputStr >> targetStr;

    int inputLen = inputStr.length();
    int targetLen = targetStr.length();
    int count = -1;

    // 입력 문자열에서 목적 문자열의 발생 횟수를 계산
    for (int i = 0; i <= inputLen - targetLen; i++) {
        if (inputStr.substr(i, targetLen) == targetStr) {
            count++;
        }
    }

    // 결과 출력
    if(count != -1){
    cout << count << endl;
    }
    else{
        cout << count;
    }

    return 0;
}