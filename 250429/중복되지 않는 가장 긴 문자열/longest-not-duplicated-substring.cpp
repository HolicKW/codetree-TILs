#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int n;
unordered_map<char, int> count_array;
string str;
int main() {
    // Please write your code here.
    cin >> str;
    n = str.length();
    
    int j = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        while(j<n && count_array[str[j]] != 1){
            count_array[str[j]]++;
            j++;
        }
        ans = max(ans,j-i);
        count_array[str[i]]--;
    }

    cout << ans;
    return 0;
}