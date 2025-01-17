#include <iostream>
#include <algorithm>
using namespace std;

int arr[21];
int n;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    
    int result = 0;
    for(int i = 0; i< n;i++){
        for(int j = i+1; j<n;j++){
            for(int k = j+1; k<n; k++){
                int x = arr[i]; int y = arr[j]; int z = arr[k];
                int ans = x+y+z;
                bool check = true;
                while(max(x,max(y,z))>0){
                    if(x%10 + y%10 + z%10 >= 10){
                        check = false;
                    }
                    x/=10;
                    y/=10;
                    z/=10;
                }
                if(check){
                    result = max(result,ans);
                }
                
            }
        }
    }
    cout << result;
    return 0;
}