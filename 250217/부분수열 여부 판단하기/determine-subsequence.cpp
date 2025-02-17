#include <iostream>
using namespace std;
#define MAX 100000

int a[MAX];
int b[MAX];
int n,m;
bool isTrue(){
    int i = 0;
    for(int j = 0; j<=m;j++){
        while(i<n && a[i] != b[j]){
            i++;
        }

        if(i == n+1){
            return false;
        }
        else{
            i++;
        }
    }

    return true;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    for(int i =0; i<m;i++){
        cin >> b[i];
    }

    if(isTrue()){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}