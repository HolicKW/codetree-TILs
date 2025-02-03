#include <iostream>
#include <set>
using namespace std;

set<int> s;
int main() {
    // Please write your code here.
    int n,m;
    int num;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> num;
        s.insert(num);
    }

    for(int i = 0; i<m;i++){
        cin >> num;
        if(s.lower_bound(num) != s.end()){
            cout << *s.lower_bound(num) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}