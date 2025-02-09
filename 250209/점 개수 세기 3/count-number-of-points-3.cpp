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
    int idx=1;
    for(int num : s){
        umap[num] = idx++;
    }
    for(int i = 0; i<q;i++){
        int a,b;
        cin >> a >> b;
        int ans = umap[b]-umap[a];
        
        cout << ans+1 << endl;
    }
    return 0;
}