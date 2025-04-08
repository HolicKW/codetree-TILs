#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX 50000
int n;
long long arr[MAX];
long long fnd(int n){
    int cnt = 1;
    while(1){
        n /= 10;
        if(n == 0){
            break;
        }
        cnt *= 10;
    }
    return cnt;
    
}
bool cmp(long long a, long long b){
    long long num1 = fnd(a); 
    long long num2 = fnd(b);

    long long x = a*num2*10 + b;
    long long y = b*num1*10 + a;
    if(x>y){
        return true;
    }
    return false;
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,cmp);
    string sum = "";
    for(int i = 0; i<n;i++){
        sum += to_string(arr[i]);
    }
    cout << sum;
    return 0;
}