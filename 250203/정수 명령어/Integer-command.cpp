#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.
    int t,a;
    set<int> s;
    char c;
    cin >> t;
    for(int i = 0; i<t;i++){
        int k;
        cin >> k;
        for(int j = 0; j<k;j++){
            cin >> c;
            if(c == 'I'){
                cin >> a;
                s.insert(a);
            }
            else if(c == 'D'){
                cin>>a;
                if(s.empty()){
                    continue;
                }
                else if(a == 1){
                    s.erase(*s.rbegin());
                }
                else if(a == -1){
                    s.erase(s.begin());
                }
            }
        }
        if(s.empty()){
            cout << "EMPTY" << endl;
        }
        else{
            cout << *s.rbegin() << " " << *s.begin() << endl;
        }
        s.clear();
    }
    return 0;
}