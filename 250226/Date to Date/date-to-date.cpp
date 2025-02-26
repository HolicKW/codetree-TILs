#include <iostream>
using namespace std;
int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    // Please write your code here.
    int m1,m2,d1,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int date=0;
    for(int i = m1; i <m2;i++){
        date += days[i];
    }
    date += d2-d1+1;
    cout << date;
    return 0;
}