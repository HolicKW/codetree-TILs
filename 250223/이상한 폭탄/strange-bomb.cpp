#include <iostream>
#include <unordered_map>

#define MAX 200000
using namespace std;

int k,n;
int arr[MAX+1];
int bomb[MAX+1];
int main() {
    // Please write your code here.
    cin >> n >> k;
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }
    unordered_map<int,int>umap;
    for(int i = n; i>=1; i--){
        if(umap.find(arr[i]) == umap.end()){
            bomb[i] = -1;
        }
        else{
            bomb[i] = umap[arr[i]];
        }

        umap[arr[i]] = i;
    }

    int ans = -1;
    for(int i = 1; i<=n;i++){
        if(bomb[i] != -1 && bomb[i] - i <=k){
            ans = max(ans,arr[i]);
        }
    }

    cout << ans;
    return 0;
}