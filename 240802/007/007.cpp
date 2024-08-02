#include <iostream>
#include <string>
using namespace std;

class secret{
    public:
        string cod;
        char spc;
        int tim;

        secret(string codr, char spcr, int timr){
            cod = codr;
            spc = spcr;
            tim = timr;
        }

        
};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int n;
    char c;
    cin >> s >> c >> n;
    secret sec(s,c,n);
    cout <<"secret code : " << sec.cod << '\n' << "meeting point : "<<
    sec.spc << '\n' << "time : "<< sec.tim;
    
    return 0;
}