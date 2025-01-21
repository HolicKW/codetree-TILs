#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6];
    int result = 0;
    int ans = INT_MAX;
    for(int i = 0; i<6;i++){
        cin >> arr[i];
        result += arr[i];
    }
    for(int i = 0; i<6;i++){
        for(int j = 0;j<6;j++){
            for(int k = 0;k<6;k++){
                for(int l = 0; l<6; l++){
                    if(i!=j && j != k && k != l && i!= k && i!= l && j != l){
                        int tmp1 = arr[i] + arr[j];
                        int tmp2 = arr[k] + arr[l];
                        int tmp3 = result - tmp1 - tmp2;

                        int biggest = max(tmp1,max(tmp2,tmp3));
                        int smallest = min(tmp1,min(tmp2,tmp3));
                        ans = min(ans,biggest-smallest);
                    }
                    

                }
            }
        }
    }

    cout << ans;
    return 0;
}