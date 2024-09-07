#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        string s;
        int n;
        cin >> s;
        if(s == "push"){
            cin >> n;
            q.push(n);
        }
        else if(s == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
        else if(s == "size"){
            cout << q.size() << endl;
        }
        else if(s == "empty"){
            if(q.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }

        else if(s == "front"){
            cout << q.front() << endl;
        }
        
    }
    return 0;
}