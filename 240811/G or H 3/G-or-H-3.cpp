#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    char arr[10001] = {'0',};
    for(int i = 0; i<n; i++){
        int t;
        char color;
        cin >> t >> color;
        arr[t] = color;
    }
    int maxa(0);
    for(int i = 0; i<10001-k; i++){
        int result(0);
        for(int j = i; j<=i+k; j++){
            if(arr[j] == 'G'){
                result++;
            }
            else if(arr[j] == 'H'){
                result+= 2;
            }
        }
        maxa = max(result,maxa);
    }

    cout << maxa;


    return 0;
}