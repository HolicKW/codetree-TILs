#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string,int> m;
string s;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> s;
        m[s]++;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        cout << (it->first) << " " << (it->second) << endl;
    }
    return 0;
}