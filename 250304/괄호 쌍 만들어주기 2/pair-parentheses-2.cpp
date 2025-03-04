#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int cnt = 0;
    int len = str.length();
    for(int i = 1; i< len-2; i++){
        if(str[i] == '(' && str[i-1] =='('){
            for(int j = i+1; j<len-1;j++){
                if(str[j] == ')' && str[j+1] == ')'){
                    cnt++;
                }
            }
        }
    }
    cout <<cnt;
    return 0;
}