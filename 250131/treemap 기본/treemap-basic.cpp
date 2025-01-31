#include <iostream>
#include <map>
using namespace std;

int main() {
    // Please write your code here.
    map<int,int> m;
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int a,b;
        string command;
        cin >> command;
        if(command == "add"){
            cin >> a >> b;
            m[a] = b;
        }
        else if(command == "find"){
            cin >> a;
            if(m.find(a) != m.end()){
                cout << m[a] << endl;
            }
            else{
                cout << "None" << endl;
            }
        }
        else if(command == "remove"){
            cin >> a;
            m.erase(a);
        }
        else{
            if(m.begin() == m.end()){
                cout << "None";
            }
            else{
                for(auto it = m.begin(); it != m.end(); it++){
                    cout << it ->second << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}