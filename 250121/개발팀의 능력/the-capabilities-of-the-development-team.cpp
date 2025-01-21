#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int arr[5];
    int result = 0;
    int ans = INT_MAX;
    for(int i = 0; i<5;i++){
        cin >> arr[i];
        result += arr[i];
    }
    for(int i = 0; i<5;i++){
        for(int j = 0;j<5;j++){
            for(int k = 0;k<5;k++){
                for(int l = 0; l<5; l++){
                    if(i!=j && j != k && k != l && i!= k && i!= l && j != l){
                        int tmp1 = arr[i] + arr[j];
                        int tmp2 = arr[k] + arr[l];
                        int tmp3 = result - tmp1 - tmp2;
                        if(tmp1 == tmp2 || tmp2 == tmp3 || tmp1 == tmp3 ){
                            break;
                        }
                        int biggest = max(tmp1,max(tmp2,tmp3));
                        int smallest = min(tmp1,min(tmp2,tmp3));
                        ans = min(ans,biggest-smallest);
                    }
                    

                }
            }
        }
    }
    if(ans > 0){
        cout << ans;
    }
    else{
        cout << -1;
    }
    return 0;
}