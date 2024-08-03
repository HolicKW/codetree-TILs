#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int m1,m2,d1,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int m1result = 0;
    int m2result = 0;
    int month[13] ={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    for(int i = 0; i<m1; i++){
        m1result += month[i];
    }
    m1result += d1;

    for(int i = 0; i<m2; i++){
        m2result += month[i];
    }
    m2result += d2;

    cout << m2result - m1result + 1;
    return 0;
}