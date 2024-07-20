#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i<5;i++){
        for(int j = 0; j<str[i].length();j++){
            if(str[i][2] == a || str[i][3]== a){
                cout << str[i] << endl;
                cnt++;
                break;
            }

        }
    }

    cout << cnt;

    
    return 0;
}