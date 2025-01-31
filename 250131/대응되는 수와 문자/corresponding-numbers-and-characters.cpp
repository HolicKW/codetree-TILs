#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string,int> umap;
unordered_map<int,string> umap2;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    string a;
    for(int i = 0; i<n;i++){
        cin >> a;
        umap[a] = i+1;
        umap2[i+1] = a;
    }

    for(int i = 0 ;i<m;i++){
        cin >> a;
        if(umap.find(a) != umap.end()){
            cout << umap[a] << endl; 
        }
        else{
            int num = stoi(a);
            cout << umap2[num] << endl;
        }
    }
    return 0;
}