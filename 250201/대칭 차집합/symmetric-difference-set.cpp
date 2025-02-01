#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> umap1;
unordered_set<int> umap2;

int a1,b1;
int main() {
    // Please write your code here.
    int a[200000];
    int b[200000];
    cin >> a1 >> b1;
    for(int i = 0; i<a1;i++){
        cin >> a[i];
        umap1.insert(a[i]);
    }
    for(int i = 0; i<b1;i++){
        cin >> b[i];
        umap2.insert(b[i]);   
    }
    int cnt = 0;
    for(int i = 0; i<b1;i++){
        if(umap1.find(b[i]) == umap1.end()){
            cnt++;
        }
    }

    for(int i = 0; i<a1;i++){
        if(umap2.find(a[i]) == umap2.end()){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}