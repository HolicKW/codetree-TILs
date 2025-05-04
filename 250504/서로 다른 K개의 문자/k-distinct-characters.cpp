#include <iostream>
#include <unordered_map>
using namespace std;
#define MAX 100000
unordered_map<char,int> umap;
string str;
int k;
int main() {
    // Please write your code here.
    cin >> str >> k;
    int len = str.length();
    int j = 0;
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i <len; i++){
        while(j<len){
            if(umap[str[j]] == 0 && cnt == k) break;
            if(umap[str[j]] == 0){
                cnt++;
            }
            umap[str[j]]++;
            j++;
        }
        ans = max(ans,j-i);
        umap[str[i]]--;
        if(umap[str[i]] == 0) cnt--;
    }
    cout << ans;

    return 0;
}