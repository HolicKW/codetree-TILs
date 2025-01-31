#include <iostream>
#include <map>
#include <string>
using namespace std;

int n;
map<string,int> m;
int main() {
    // Please write your code here.
    cin >> n;
    string s;
    for(int i = 0; i<n;i++){
        cin>>s;
        m[s]++;
    }
    cout << fixed;
    cout.precision(4);
    for(auto it = m.begin(); it != m.end(); it++){
        double rate = ((double)(it->second) / n) * 100.0;
        cout << (it->first) << " " << rate << endl;
    }
    return 0;
}