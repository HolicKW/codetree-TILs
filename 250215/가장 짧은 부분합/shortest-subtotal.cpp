#include <iostream>
using namespace std;
#define MAX 100000
int main() {
    // Please write your code here.
    int arr[MAX];
    int n,s;
    cin >> n >> s;
    int result = 100001;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    int j = 0;
    for(int i = 0; i<n;i++){
        int sum = 0;
        while(j <= n-1 && sum + arr[j] <= s){
            sum += arr[j];
            j++;
            
        }
        result = min(result, j-i+1);

    }

    

    if(result == 100001){
        cout << -1;
    }
    else{
        cout << result;
    }
    return 0;
}