#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int n(0);
    int k(0);
    int cnt(0);
    for(int i = 0; i<a.length(); i++){
        if(a[i] == '('){
            for(int j = i; j<a.length(); j++){
                if(a[j] == ')'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}