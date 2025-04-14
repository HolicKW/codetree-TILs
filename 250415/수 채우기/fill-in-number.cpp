#include <iostream>
using namespace std;
int coin[2] = {2,5};
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    cnt += n/5;
    n =  n%5;
    if(n%2 !=0){
        n+=5;
        cnt--;
    }
    cnt += n/2;
    cout << cnt;


    return 0;
}