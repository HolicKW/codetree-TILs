#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n,cnt(0);
    cin >> str;
    cin >> n;
    if (n<=str.length()){
        for(int i = str.length()-1; i>0;i--){
            if(cnt == n){
                break;
            }
            cout << str[i];
            cnt++;
        }
    }
    else{
        cout << str;
    }
    return 0;
}