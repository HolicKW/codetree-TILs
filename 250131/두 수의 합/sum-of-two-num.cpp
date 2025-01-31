#include <iostream>
#include <unordered_map>
using namespace std;

int arr[100000];
unordered_map<int,int> umap;
int cnt = 0;

int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        umap[arr[i]]++;
    }
    for(int i = 0; i<n;i++){
        int complement = k - arr[i];
        
        if(umap.find(complement) != umap.end()){
            cnt += umap[complement];
        }

        if(complement == arr[i]){
            cnt--;
        }
    }

    cout << cnt/2;
    
    return 0;
}