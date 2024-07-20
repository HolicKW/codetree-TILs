#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[20];
    char a;
    int n,cnt(0),result(0);
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> str[i];
    }
    cin >> a;

    for(int i = 0; i<n;i++){
         if(str[i][0] == a){
            result += str[i].length();
            cnt++;
        }
        
    }

    cout << cnt << ' ';
    cout << fixed;;
    cout.precision(2);
    cout << (double)result/cnt;

    return 0;
}