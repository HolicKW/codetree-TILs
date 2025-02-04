#include <iostream>
#include <set>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    int arr[n];
    set<int> s;
    for(int i =0; i<n;i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }
    int result = INT_MAX;
    for(int i = 0; i<n;i++){
        auto it = s.upper_bound(arr[i]+m);
        if(it!=s.end()){
            int ans = *it - arr[i]; 
            result = min(result,ans);
        }

    }

    if(result == INT_MAX){
        cout << -1;
    }
    else{
        cout <<result;
    }
    return 0;
}