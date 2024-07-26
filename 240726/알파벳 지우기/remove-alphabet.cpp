#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,a1,b,b1;
    cin >> a >> b;
    int aidx(0),bidx(0);
    for(int i = 0; i<a.length();i++){
        if(a[i]>='0' && a[i]<='9'){
            a1[aidx] = a[i];
            aidx++;
        }
    }

    for(int i = 0; i<b.length();i++){
        if(b[i]>='0' && b[i]<='9'){
            b1[bidx] = b[i];
            bidx++;
        }
    }

    cout << stoi(a1) + stoi(b1);
    return 0;
}