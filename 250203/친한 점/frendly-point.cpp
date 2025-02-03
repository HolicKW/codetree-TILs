#include <iostream>
#include <set>
#include <utility>
using namespace std;
set<pair<int,int>>s;
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    int x1,y1;
    for(int i = 0; i<n;i++){
        cin >> x1 >> y1;
        s.insert({x1,y1});
    }

    for(int i = 0; i<m;i++){
        cin >> x1 >> y1;
        if(s.lower_bound({x1,y1}) != s.end()){
            pair<int,int> fr = *s.lower_bound({x1,y1});
            cout << fr.first << ' ' << fr.second << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}