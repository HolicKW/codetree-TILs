#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<int> s;
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;

    for(int i = 0; i<=n;i++){
        s.insert(i);
    }

    for(int i = 0; i<m;i++){
        int num;
        cin >> num;
        s.erase(num);
        int len = 0,cur = 0;
        auto it = s.begin();
        int prev = *it - 1;
        for(;it!=s.end();it++){
            if(*it == prev+1){
                cur++;
            }
            else{
                len = max(len,cur);
                cur = 1;
            }
            len = max(len,cur);
            prev = *it;
        }
        cout << len << endl;
    }
    return 0;
}