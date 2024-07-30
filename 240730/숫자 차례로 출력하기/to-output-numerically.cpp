#include <iostream>
using namespace std;

void cntn(int n){
    if(n == 0){
        return ;
    }
    cout << n << " ";
    cntn(n-1);
    
}
int na = 1;
void cntn1(int n){
    if(na > n){
        return ;
    }
    cout << na << " ";
    na++;
    cntn1(n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cntn1(n);
    cout << endl;
    cntn(n);
    return 0;
    
}