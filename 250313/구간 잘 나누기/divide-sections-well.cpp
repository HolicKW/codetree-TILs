#include <iostream>
using namespace std;

int arr[100];
int main() {
    // Please write your code here.
    int n,m;
    cin >> n>> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ans = 100001;
    for(int i = 1; i<10001;i++){
        int sum = 0;
        int mcnt = 1;
        bool pos = true;
        for(int j = 0; j<n; j++){
            if(arr[j] > i){
                pos = false;
                break;
            }

            sum += arr[j];

            if(sum > i){
                sum = arr[j];
                mcnt++;
            }

        }
        if((pos && mcnt <= m)){
            ans = min(ans,i);
        }

    }
    cout << ans;
    return 0;
}