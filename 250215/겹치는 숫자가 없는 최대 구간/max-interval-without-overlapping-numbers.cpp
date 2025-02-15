#include <iostream>
using namespace std;
#define MAX 100000
int main() {
    // Please write your code here.
    int arr[MAX+1];
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    int count[MAX+1];
    int j = 0;
    int result = 0;
    for(int i = 0; i<n;i++){
        while(j<n && count[arr[j]] == 0){
            count[arr[j]]++;
            j++;
        }

        result = max(result,j-i);
        count[arr[i]]--;
    }

    cout << result;
    return 0;
}