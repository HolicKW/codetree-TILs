#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    int num;
    cin >> n >> m;
    set<int> s;
    for(int i = 0; i<n;i++){
        cin >> num;
        s.insert(num);
    }
    for(int i = 0; i<m;i++){
        cin >> num;
        auto it = s.upper_bound(num);
        if(it == s.begin()){
            cout << -1 << endl;
        }
        else{
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
    return 0;
}