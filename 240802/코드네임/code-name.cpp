#include <iostream>
using namespace std;

class codename{
    public:
        char a;
        int n;
        codename(char ar, int nr){
            a = ar;
            n = nr;
        }
        codename() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    codename cod[5];
    for(int i = 0; i < 5;i++){
        int n;
        char a;
        cin >> a >> n;
        cod[i] = codename(a,n);
    }
    int min = cod[0].n;
    int num = 0;
    for(int i = 1; i<5; i++){
        if(min>cod[i].n){
            min = cod[i].n;
            num = i;
        }
    }
    cout << cod[num].a << " " << cod[num].n;
    return 0;
}