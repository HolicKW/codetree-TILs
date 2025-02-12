#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    int arr[n];
    set<int>s;
    int cnt = 0;
    for(int i = 1; i<=m;i++){
        s.insert(i);
    }
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n;i++){
        auto it = s.upper_bound(arr[i]);

        if(it==s.begin()){
            break;
        }
        else{
            it--;
            cnt++;
            s.erase(it);
        }
    }

    cout << cnt;
    return 0;
}