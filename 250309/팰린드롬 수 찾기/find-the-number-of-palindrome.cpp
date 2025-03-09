#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x,y;
    string str;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i<=y;i++){
        int temp = i;
        int rev = 0;
        while(temp > 0){
            rev = (temp % 10) + (rev * 10);
            temp /= 10;
        }
        if(i == rev){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}