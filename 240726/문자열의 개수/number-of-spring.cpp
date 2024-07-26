#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string re[200];
    int result = 0;
    int i = 0;
    while(1){
        cin>>str;
        if(str == "0"){
            cout << result << endl;
            for(int a = 0; a<i;a++){
                cout<< re[a] << endl;
            }
            break;
        }
        else{
            result++;
            if(result%2==1){
                re[i] = str;
                i++;
            }
        }
    }
    return 0;
}