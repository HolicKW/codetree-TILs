#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string lr;
    cin >> str >> lr;
    for(int i = 0; i<lr.length(); i++){
        if(lr[i] == 'L'){
            str = str.substr(1,str.length()-1) + str.substr(0,1);
        }
        else if (lr[i] == 'R'){
            str = str.substr(str.length()-1, 1) + str.substr(0,str.length()-1);
        }
    }

    cout << str;
    return 0;
}