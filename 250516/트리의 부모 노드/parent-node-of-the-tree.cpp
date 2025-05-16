#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tree;
int n;

int main() {
    // Please write your code here.
    cin >> n;
    tree.resize(n+1);
    for(int i = 2; i<=n;i++){
        int parent,child;
        cin >> parent >> child;
        tree[child].push_back(parent);
    }
    for(int i = 2; i<=n;i++){
        
        cout<<tree[i][0]<<endl;
    }
    
    
    return 0;
}