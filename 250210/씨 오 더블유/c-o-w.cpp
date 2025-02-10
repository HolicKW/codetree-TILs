#include <iostream>
#include <string>
using namespace std;
#define MAX 100001
char arr[MAX];
int L[MAX];
int R[MAX];
int main() {
    // Please write your code here.
    int n;
    cin >>n;
    for(int i =1; i<=n;i++){
        cin >> arr[i];
    }
    int Ccount = 0;
    for(int i=1; i<=n;i++){
        if(arr[i] == 'C'){
            Ccount++;
        }
        L[i] = max(L[i-1],Ccount);
    }
    int Wcount = 0;
    for(int i = n;i>=1;i--){
        if(arr[i] == 'W'){
            Wcount++;
        }
        R[i] = max(R[i+1],Wcount);
    }
    int result = 0;
    for(int i = 1;i<=n-1;i++){
        if(arr[i] == 'O'){
            result += L[i-1] * R[i+1];
        }
    }

    cout << result;
    return 0;
}