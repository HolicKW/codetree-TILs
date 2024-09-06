#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    stack<char> stk;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == '('){
            stk.push('(');
        }

        else{
            if(stk.empty()){
                cout << "No";
                return 0;
            }
            else{
                stk.pop();
            }
        }
    }

    if(stk.empty()){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}