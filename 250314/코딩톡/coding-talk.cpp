#include <iostream>
#include <set>
using namespace std;
pair<char,int> arr[27];
set<char> s;
int main() {
    // Please write your code here.
    int n,m,p,u;
    char c;
    cin >> n >> m  >> p;
    for(int i = 0; i<n; i++){
        s.insert('A'+ i);
    }
    for(int i = 0; i<m;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i = p-1; i<m;i++){
        if(s.find(arr[i].first) !=s.end()){
            s.erase(arr[i].first);
        }
    }

    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}