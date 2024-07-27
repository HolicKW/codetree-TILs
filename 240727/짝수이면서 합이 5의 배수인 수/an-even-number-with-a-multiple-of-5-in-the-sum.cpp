#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int div = n/10;
    int na = n%10;
    int result = div + na;
 
    if(n%2 == 0&& result%5 ==0){
        cout<<"Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}