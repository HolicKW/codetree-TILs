#include <iostream>
using namespace std;
int cnt(0);
int remin(int n){
    if(n==1){
        return cnt;
    }
    if(n%2==0){
        cnt++;
        return remin(n/2);
    }
    else{
        cnt++;
        return remin(n/3);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << remin(n);
    return 0;
}