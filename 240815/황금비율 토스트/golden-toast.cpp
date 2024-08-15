#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<char> ch;
    list<char>::iterator it;
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        char c;
        cin >> c;
        ch.push_back(c);
    }
    it = ch.end();
    
    for(int i = 0; i<m; i++){
        char c;
        cin >> c;
        if(c == 'L'){
            if(it != ch.begin()){
                it--;
            }
        }
        else if(c == 'R'){
            if(it != ch.end()){
                it++;
            }
        }
        else if(c == 'D'){
            if(it != ch.end()){
                it = ch.erase(it);
            }
        }
        else if(c == 'P'){
            char ams;
            cin >> ams;
            ch.insert(it,ams);
        }

    }

    for(it = ch.begin(); it != ch.end(); it++){
        cout << *it;
    }
    return 0;
}