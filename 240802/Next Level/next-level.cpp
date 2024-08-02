#include <iostream>
#include <string>
using namespace std;

class nextlevel{
    public:
        string user;
        int lv;
        nextlevel(string c_user = "codetree",int c_lv = 10){
            user = c_user;
            lv = c_lv;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int n;
    cin >> s >> n;
    nextlevel ne;
    cout << "user " << ne.user << " lv " << ne.lv;
    cout << endl;
    ne = nextlevel(s,n);
    cout << "user " << ne.user << " lv " << ne.lv;
    return 0;
}