#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int len = s.length();
    int arr[100001];
    arr[len-1] = 0;
    for(int i = len-2; i>=0;i--){
        if(s[i] == ')' && s[i+1] == ')'){
            arr[i] = arr[i+1] + 1;
        }
        else{
            arr[i] = arr[i+1];
        }
    }


    long result = 0;
    for (int i =0; i<len-2;i++){
        if(s[i] == '(' && s[i+1] == '('){
            result += arr[i+2];
        }
    }

    cout << result;
    return 0;
}