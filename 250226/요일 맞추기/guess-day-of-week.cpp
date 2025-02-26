#include <iostream>
using namespace std;
int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sum_date(int m,int d){
    int date = 0;
    for(int i = 1;i<m;i++){
        date += days[i];
    }
    date+=d;
    return d;
}
int main() {
    // Please write your code here.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int num = sum_date(m2,d2) - sum_date(m1,d1);

    while(num<0){
        num+=7;
    }
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    cout << week[num%7];
    return 0;
}