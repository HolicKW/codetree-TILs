#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int relcm(int n, int arr[]){
    if(n==0) return arr[0];
    return lcm(arr[n],relcm(n-1,arr));
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    cout << relcm(n-1,arr);
    return 0;
}