#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> parent(n+1); // parent[i]: i번 노드의 부모

    for(int i = 2; i <= n; i++){
        int p, c;
        cin >> p >> c;
        parent[c] = p; // c번 노드의 부모는 p
    }

    for(int i = 2; i <= n; i++){
        cout << parent[i] << endl;
    }
    return 0;
}
