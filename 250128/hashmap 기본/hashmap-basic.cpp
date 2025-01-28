#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<int,int> umap;
int n,k,v;
string command;

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> command;
        if(command == "add"){
            cin >> k >> v;
            umap[k] = v;
        }
        else if(command == "find"){
            cin >> k;
            if(umap.find(k) != umap.end()){
                cout << umap[k] << endl;
            }
            else{
                cout << "None" << endl;
            }
        }

        else if(command == "remove"){
            cin >> k;
            umap.erase(k);
        }
    }
    return 0;
}