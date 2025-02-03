#include <iostream>
#include <set>
using namespace std;

set<int> s;
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 1; i<=m;i++){
        s.insert(i);
    }
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        s.erase(num);
        cout << *s.rbegin() << endl;
    }
    return 0;
}