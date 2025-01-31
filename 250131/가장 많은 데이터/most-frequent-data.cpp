#include <iostream>
#include <unordered_map>
using namespace std;

string arr[100001];
unordered_map<string, int> str;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        str[arr[i]]++;
        ans = max(ans,str[arr[i]]);
    }

    cout << ans;
    return 0;
}