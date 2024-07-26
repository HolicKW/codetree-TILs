#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    int len = a.length();
    int i = 0;
    int cnt = 0;
    for(i;i<a.length();i++){
        a=a[a.length()-1] + a.substr(0,a.length()-1);
        cnt++;
        if(a==b){
            cout << cnt;
            break;
        }
    }
    
    if(a != b){
        cout << -1;
    }
    return 0;
}