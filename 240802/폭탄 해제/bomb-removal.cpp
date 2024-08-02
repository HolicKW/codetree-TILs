#include <iostream>
#include <string>
using namespace std;

class bomb{
    public:
        string code;
        char rgb;
        int sec;
        bomb(string code_r,char rgb_r,int sec_r){
            code = code_r;
            rgb = rgb_r;
            sec = sec_r;
        }

};
int main() {
    // 여기에 코드를 작성해주세요.

    string s;
    char c;
    int n;
    cin >> s >> c >> n;
    bomb bom(s,c,n);
    cout << "code : " << bom.code << endl << "color : " << bom.rgb << endl << "second : " << bom.sec << endl;

    return 0;
}