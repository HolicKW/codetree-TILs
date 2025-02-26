#include <iostream>
using namespace std;

int arr[2001];
int main() {
    // Please write your code here.
    int n;
    int x;
    int loc = 1000;
    char dir;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> x >> dir;
        
        if(dir == 'L'){
            for(int i = 0;i<x;i++){
                arr[loc]++;
                loc--;
            }
        }
        else{
            for(int i = 0;i<x;i++){
                arr[loc]++;
                loc++;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<2001;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}