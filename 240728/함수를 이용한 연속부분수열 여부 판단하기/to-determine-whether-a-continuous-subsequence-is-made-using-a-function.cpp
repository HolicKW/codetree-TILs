#include <iostream>
#include <array>
using namespace std;

bool cmp(int * arr1,int*arr2,int len1,int len2){
    for(int i = 0; i <= len1-len2; i++){
        bool match = true;
        for(int j = 0; j<len2; j++){
            if(arr1[i+j] != arr2[j]){
                match = false;
                break;
            }
        }
        if(match){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1,n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    for(int i = 0 ; i < n1;i++){
        cin >> arr1[i];
    }
    for(int i = 0 ; i < n2;i++){
        cin >> arr2[i];
    }
    if(cmp(arr1,arr2,n1,n2)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}