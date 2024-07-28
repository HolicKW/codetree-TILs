#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m,d;
    cin >> m >> d;
    if(m>12 || d>31){
        cout << "No";
        return 0;
    }
    int M[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    if(M[m]>=d){
        cout << "Yes";
    }
    return 0;
}