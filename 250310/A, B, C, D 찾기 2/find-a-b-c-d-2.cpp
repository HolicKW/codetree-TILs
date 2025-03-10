#include <iostream>
#include <algorithm>
using namespace std;
int arr[15];
int main() {
    // Please write your code here.
    for(int i = 0; i<15;i++){
        cin >> arr[i];
    }
    sort(arr,arr+15);
    int a= arr[0];
    int b= arr[1];
    int c= 0;
    if(a+b != arr[2]){
        c=arr[2];
    }
    else{
        c = arr[3];
    }
    int d = arr[14] - a - b - c;

    cout << a << ' ' <<  b  << ' '  << c  << ' ' << d;
    return 0;
}