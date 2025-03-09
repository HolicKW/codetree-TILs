#include <iostream>
using namespace std;

int a,b,c;
int ans = 0;

int main() {
    // Please write your code here.
    cin >> a >> b >> c;
    for(int i = 0;i<1000;i++){
        int sum = 0;
        for(int j = 0; j<1000;j++){
            sum = a*i + b*j;
            if(sum <=c){
                ans = max(ans,sum);
            }
            else{
                break;
            }
        }
    }
    cout << ans;
    return 0;
}