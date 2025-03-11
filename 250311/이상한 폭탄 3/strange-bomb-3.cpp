#include <iostream>
using namespace std;
int arr[101];
int bomb[101];
bool explode[101];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;

    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = 1;
    int idx = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n;j++){
            if(j-i>k) break;

            if(arr[i] != arr[j])continue;

            if(explode[i] == false){
                explode[i] = true;
                bomb[i]++;
            }
            if(explode[j] == false){
                explode[j] = true;
                bomb[j]++;
            }
        }
    }
    for(int i = 0; i<n;i++){
        if(bomb[i] >= ans){
            ans = bomb[i];
            idx = i;
        }
    }

    cout << idx;
    return 0;
}