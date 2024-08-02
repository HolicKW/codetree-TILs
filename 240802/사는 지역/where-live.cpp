#include <iostream>
#include <string>
using namespace std;

class region{
    public:
        string last_name;
        string num;
        string reg;
        
        region(string last,string n,string reg_c){
            last_name = last;
            num = n;
            reg = reg_c;
        }
        region() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    region re[n];
    for(int i = 0; i<n;i++){
        cin >> re[i].last_name >> re[i].num >> re[i].reg;
    }
    int cnt = 0;
    string cmp = re[0].last_name;
    for(int i = 1; i<n; i++){
        if(cmp < re[i].last_name){
            cmp = re[i].last_name;
            cnt = i;
        }
    }

    cout <<"name " <<re[cnt].last_name << endl;
    cout <<"addr " <<re[cnt].num << endl;
    cout <<"city " <<re[cnt].reg << endl;


    return 0;
}