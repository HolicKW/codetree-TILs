#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    
    string command;
    int a;

    for(int i = 0; i < n; i++) {
        cin >> command;

        if(command == "add") {
            cin >> a;
            s.insert(a);
        }
        else if(command == "remove") {
            cin >> a;
            s.erase(a);
        }
        else if(command == "find") {
            cin >> a;
            if(s.find(a) == s.end()) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
        }
        else if(command == "lower_bound") {
            cin >> a;
            auto it = s.lower_bound(a);
            if(it == s.end()) {
                cout << "None" << endl;
            }
            else {
                cout << *it << endl;
            }
        }
        else if(command == "upper_bound") {
            cin >> a;
            auto it = s.upper_bound(a);
            if(it == s.end()) {
                cout << "None" << endl;
            }
            else {
                cout << *it << endl;
            }
        }   
        else if(command == "largest") {
            if(s.empty()) {
                cout << "None" << endl;
            }
            else {
                cout << *s.rbegin() << endl;
            }
        }
        else if(command == "smallest") {
            if(s.empty()) {
                cout << "None" << endl;
            }
            else {
                cout << *s.begin() << endl;
            }
        }
    }
    return 0;
}
