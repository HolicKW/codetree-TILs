#include <iostream>
using namespace std;
int arr[101] = {0,};

int main() {
    // Please write your code here.
    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 0 ;i<m;i++){
        int num;
        cin >> num;
        arr[num]++;
        if(arr[num] >=k){
            cout << num;
            return 0;
        }
    }

    cout << -1;
    return 0;
}