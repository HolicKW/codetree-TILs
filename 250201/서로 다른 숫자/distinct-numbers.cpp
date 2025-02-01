#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> uset;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int a;
        cin >> a;
        uset.insert(a);
    }

    cout << uset.size();
    return 0;
}