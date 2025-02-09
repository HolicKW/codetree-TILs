#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
set<int> s;
unordered_map<int ,int> umap;
int main() {
    // Please write your code here.
    int n,q;
    cin >> n>> q;
    for(int i =0; i<n;i++){
        int num;
        cin >> num;
        s.insert(num);

    }
    
    for(int i = 0; i<q;i++){
        int a,b;
        cin >> a >> b;
        int cnt = 0;
        for(auto it = s.lower_bound(a); it != s.upper_bound(b); it++){
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}