#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    string s;
    cin >> n >> k >> s;
    string str[n];
    for(int i = 0; i<n;i++){
        cin >> str[i];

    }
    string strcp[n];
    int cnt = 0;
    for(int i = 0; i<n;i++){ 
        if(str[i].substr(0,s.length()) == s){
            strcp[cnt] = str[i];
            cnt++;
        }
    }
    sort(strcp,strcp+cnt);
    cout << strcp[k-1];
    return 0;
}