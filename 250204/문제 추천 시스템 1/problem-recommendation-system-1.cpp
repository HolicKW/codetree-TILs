#include <iostream>
#include <set>
#include <string>
using namespace std;

set<pair<int,int>> s;
int main() {
    // Please write your code here.
    int n,m;
    string command;
    int num,diff;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> num >> diff;
        s.insert({diff,num});
    }
    cin >> m;
    for(int i = 0; i<m;i++){
        cin >> command;
        if(command == "rc"){
            cin >> num;
            if(num == 1){
                cout << s.rbegin()->second << endl;
            }
            else{
                cout << s.begin()->second << endl;
            }
        }
        else if(command == "ad"){
            cin >> num >> diff;
            s.insert({diff,num});
        }
        else if(command=="sv"){
            cin >> num >> diff;
            s.erase({diff,num});
        }
    }
    return 0;
}