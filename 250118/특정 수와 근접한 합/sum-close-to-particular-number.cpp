#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n,s;
int arr[101];

int main() {
    // Please write your code here.
    cin >> n >> s;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    int result = INT_MAX;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(i==j) continue;
            int cnt = 0;
            for(int k = 0; k<n;k++){
                if(k==i || k==j)continue;
                cnt += arr[k];
            }
            if(cnt > 0){
                result = min(result,cnt-s);
            }
        }
    }

    cout << result;
    return 0;
}