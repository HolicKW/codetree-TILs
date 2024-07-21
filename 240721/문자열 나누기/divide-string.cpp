#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    int cnt = 0;
    cin >> n;
    string str[n];
    for(int i = 0; i<n;i++){
        cin >> str[i];
    }
    for(int i = 0; i<n;i++){
        for(int j = 0 ;j<str[i].length();j++){
            if(cnt == 5){
            cout << endl;
            cnt = 0;
            }
            cout << str[i][j];
            cnt++;
        }
    }
    return 0;
}