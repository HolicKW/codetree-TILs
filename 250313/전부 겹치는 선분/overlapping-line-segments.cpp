#include <iostream>
using namespace std;
int arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int x, y;
        cin >> x >> y;
        for(int j = x; j<=y;j++){
            arr[j] = arr[j] + 1;
        }
    }

    for(int i = 1; i<=100;i++){
        if(arr[i] == n){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}