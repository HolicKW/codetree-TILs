#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> uset;

int main() {
    // Please write your code here.
    int n;
    string command;
    cin >> n;
    int a;
    for(int i = 0 ;i<n;i++){
        cin>>command;
        if(command ==  "add"){
            cin >> a;
            uset.insert(a);
        }
        else if(command == "remove"){
            cin >> a;
            uset.erase(a);
        }
        else{
            cin >> a;
            if(uset.find(a) != uset.end()){
                cout << "true" << endl;
            }
            else{
                cout << "false" << endl;
            }
        }
    }
    return 0;
}