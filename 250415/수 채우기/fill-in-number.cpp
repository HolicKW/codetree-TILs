#include <iostream>
using namespace std;
int coin[2] = {2,5};
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    if(n == 1 || n == 3){
        cout << -1;
        return 0;
    }
    int cnt = 0;
    cnt += n/5;
    n = n%5;
    if(n%2 !=0){
        n+=5;
        cnt--;
    }
    cnt += n/2;
    n = n%2;
    if(n != 0){
        cout << -1;
        return 0;
    } 
    cout << cnt;


    return 0;
}