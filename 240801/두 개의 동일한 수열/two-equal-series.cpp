#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int arr1[],int arr2[], int n){
    for(int i = 0; i<n;i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i<n;i++){
        cin >> arr1[n];
    }
    for(int i = 0; i<n;i++){
        cin >> arr2[n];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    if(cmp){
        cout <<"Yes";
    }
    else{
        cout <<"No";
    }
    return 0;
}