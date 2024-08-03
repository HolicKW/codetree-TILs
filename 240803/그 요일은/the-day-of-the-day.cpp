#include <iostream>
#include <string>
using namespace std;

int su(int m1, int d1){
    int month[13] ={0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    for(int i = 0; i<m1; i++){
        total += month[i];
    }
    total += d1;
    return total;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    string start;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> start;
    int a = su(m1,d1);
    int b = su(m2,d2);
    int result = b-a;
    int cnt = 0;
    int index=0;
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    for(int i = 0; i<7; i++){
        if(week[i] == start){
            index = i;
            break;
        }
    }
    for (int i = 0; i <= result; i++) {
        if (week[(index + i) % 7] == start) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}