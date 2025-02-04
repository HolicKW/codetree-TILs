#include <iostream>
#include <set>
using namespace std;

set<pair<int,int>> s;
int main() {
    // Please write your code here.
    int n,m;
    int x,y,k;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> x >> y;
        s.insert({x,y});
    }
    for(int i = 0 ; i<m;i++){
        int num;
        cin >> num;
        auto it = s.lower_bound({num,1});
        if(it != s.end()){
            cout << it->first << " "  << it->second;
            cout << endl;
            s.erase(it);
        }
        else{
            cout << "-1 -1"<< endl;
        }
        
    }
    return 0;
}