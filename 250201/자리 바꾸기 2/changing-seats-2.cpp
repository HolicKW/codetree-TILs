#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int arr[100000];
int a[100000],b[100000];
vector<pair<int,int>> vec;
unordered_set<int> uset[100000];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;
    for(int i = 1;i<=n;i++){
        arr[i] = i;
        uset[i].insert(i);
    }
    for(int i = 0; i<k;i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i<3;i++){
        for(int j = 0; j<k;j++){
            swap(arr[a[j]],arr[b[j]]);

            if(uset[arr[a[j]]].find(a[j]) == uset[arr[a[j]]].end()){
                uset[arr[a[j]]].insert(a[j]);

            }

            if(uset[arr[b[j]]].find(b[j]) == uset[arr[b[j]]].end()){
                uset[arr[b[j]]].insert(b[j]);
            }
        }
    }

    for(int i = 1;i<=n;i++){
        cout << uset[i].size() << endl; 
    }
    return 0;
}