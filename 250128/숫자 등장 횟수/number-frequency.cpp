#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, int> umap;
int arr[100000];
int num[100000];
int n,m;
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i<m; i++){
        cin >> num[i];
    }
    for(int i = 0; i<n; i++){
        umap[arr[i]]++;
    }
    
    for(int i = 0; i<m;i++){
        cout << umap[num[i]] << ' ';
    }
    return 0;
}