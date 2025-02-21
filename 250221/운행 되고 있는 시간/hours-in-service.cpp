#include <iostream>
using namespace std;

int n;
int a,b;
int arr[101][2];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        int count[1001] = {0,};
        int cnt = 0;
        for(int j =0; j<n;j++){
            int start = arr[j][0];
            int end = arr[j][1];
            if(i == j){
                continue;
            }
            for(int k = start; k<end; k++){
                count[k]++;
                if(count[k]==1){
                    cnt++;
                }   
            }
        }

        ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}