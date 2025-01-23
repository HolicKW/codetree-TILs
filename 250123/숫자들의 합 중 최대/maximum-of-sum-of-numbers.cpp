#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x,y;
    int ans = 0;
    cin >> x >> y;
    for(int i = x; i<=y;i++){
        int result= 0;
        int tmp = i;
        while(tmp!=0){
            result += tmp%10;
            tmp /= 10;
        }
        ans = max(ans,result);
    }

    cout << ans;
    return 0;
}