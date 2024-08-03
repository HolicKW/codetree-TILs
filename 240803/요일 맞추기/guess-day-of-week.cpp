#include <iostream>
#include <string>
using namespace std;

int su(int m1, int d1){
    int month[13] ={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    for(int i = 0; i<m1; i++){
        total += month[i];
    }
    total += d1;
    return total;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,m2,d1,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int a = su(m1,d1);
    int b = su(m2,d2);
    int result = b-a;
    if(result < 0){
        result += 7;
    }
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    cout << week[result%7];
    return 0;
}