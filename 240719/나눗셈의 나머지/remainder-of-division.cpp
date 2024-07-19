#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>> a >> b;
    int arr[10] = {0};
    int cnt = 0;
    int result = 0;
    while(a>1){
        arr[a%b]++;
        a/=b;
    }
    for(int i = 0 ;i <10;i++){
        result += arr[i]* arr[i];
    }
    cout << result;
    return 0;

}