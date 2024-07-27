#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int divi(int a,int b){
    return a/b;
}
int mul(int a,int b){
    return a*b;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char sign;
    int result;
    cin >> a >> sign >> b;
    if(sign == '+'){
        result = sum(a,b);
    }
    else if(sign == '-'){
        result = sub(a,b);
    }
    else if(sign == '/'){
        result = divi(a,b);
    }
    else if(sign == '*'){
        result = mul(a,b);
    }
    else{
        cout << "false";
        return 0;
    }

    cout << a << ' ' << sign << ' ' << b << " = " << result;
    return 0;
}