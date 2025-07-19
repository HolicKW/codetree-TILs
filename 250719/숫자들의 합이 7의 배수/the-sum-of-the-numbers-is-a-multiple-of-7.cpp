#include <iostream>

using namespace std;

int n;
int numbers[50001];
int prefix[50001];


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    prefix[0] = numbers[0];
    for(int i = 1;i<n;i++){
        prefix[i] = prefix[i-1]+numbers[i];
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<i; j++){
            if((prefix[i]-prefix[j]) % 7 == 0){
                ans = max(ans,i-j);
                break;
            }
        }
    }

    cout << ans;


    // Please write your code here.

    return 0;
}
