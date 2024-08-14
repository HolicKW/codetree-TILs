#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    list<int> arr;
    for(int i=0; i<n;i++){
        string com;
        cin >> com;
        if(com == "push_front"){
            int t;
            cin >> t;
            arr.push_front(t);
        }
        else if(com == "push_back"){
            int t;
            cin >> t;
            arr.push_back(t);
        }
        else if(com == "pop_front"){
            cout<< arr.front() << endl;
            arr.pop_front();
        }
        else if(com == "pop_back"){
            cout<< arr.back() << endl;
            arr.pop_back();
        }
        else if(com == "size"){
            cout << arr.size() << endl;
        }
        else if(com == "empty"){
            if(arr.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else if(com == "front"){
            cout <<arr.front() << endl;
        }
        else if(com == "back"){
            cout << arr.back() << endl;
        }
    }

    return 0;
}