#include <iostream>
#include <unordered_set>
using namespace std;
#define MAX 100000

int arr1[MAX];
int arr2[MAX];
unordered_set<int> set1;
unordered_set<int> set2;
int main() {
    // Please write your code here.
    int n,m;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr1[i];
        set1.insert(arr1[i]);
    }
    cin >> m;
    for(int i = 0 ;i<m; i++){
        cin >> arr2[i];
        set2.insert(arr2[i]);
    }

    for(int i =0 ;i<m;i++){
        if(set1.find(arr2[i]) != set1.end()){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}