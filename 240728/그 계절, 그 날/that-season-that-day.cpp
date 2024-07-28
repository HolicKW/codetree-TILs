#include <iostream>
using namespace std;

bool istrue(int n){
    if(n%4 == 0){
        if(n % 100 == 0){
            if(n%400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    cin >> y >> m >> d;

    int M[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    if(istrue(y)){
        M[1] = 29;
    }

    if(M[m-1] < d){
        cout << "-1";
        return 0;
    }

    if(m>=3 && m<=5){
        cout <<"Spring";
    }
    else if(m>=6 && m<=8){
        cout <<"Summer";
    }
    else if(m>=9 && m<=11){
        cout <<"Fall";
    }
    else{
        cout <<"Winter"; 
    }
    return 0;
}