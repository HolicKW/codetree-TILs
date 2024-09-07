#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> s;
    int a;
    cin >> a;
    for(int i = 0; i<a;i++){
        string str;
        cin >> str;
        int n;
        if(str == "push_front"){
            cin >> n;
            s.push_front(n);
        }
        else if(str == "push_back"){
            cin >> n;
            s.push_back(n);
        }
        else if(str == "pop_front"){
            cout << s.front() << endl;
            s.pop_front();
        }
        else if(str == "pop_back"){
            cout << s.back() << endl;
            s.pop_back();
        }
        else if(str == "size"){
            cout << s.size() << endl;
        }
        else if(str == "empty"){
            if(s.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else if(str == "front"){
            cout << s.front() << endl;
        }
        else if(str == "back"){
            cout << s.back() << endl;
        }
    }
    return 0;
}