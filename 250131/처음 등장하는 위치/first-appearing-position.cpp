#include <iostream>
#include <map>
using namespace std;

map<int,int> m;
int arr[100000];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        if(m[arr[i]] == 0){
            m[arr[i]] = i+1;
        }
    }

    for(auto it = m.begin(); it!=m.end(); it++){
        cout << (it->first) << " " << (it->second) << endl;
    }


    return 0;
}