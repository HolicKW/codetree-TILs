#include <iostream>
#include <set>
using namespace std;
pair<char,int> arr[27];
set<char> s;
int main() {
    // Please write your code here.
    int n,m,p,u;
    char c;
    int cnt = m;
    cin >> n >> m  >> p;
    for(int i = 0; i<n; i++){
        s.insert('A'+ i);
    }
    for(int i = 0; i<m;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    if(arr[p-1].second == 0){
        return 0;
    }
    
    for(int i = 0; i<p-1;i++){
        if(arr[i].second == arr[p-1].second){
            if(s.find(arr[i].first) !=s.end()){
            s.erase(arr[i].first);
            }
        }
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