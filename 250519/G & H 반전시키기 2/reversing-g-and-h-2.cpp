#include <iostream>
#include <string>
using namespace std;
int n;
string str1;
string str2;
void change(int idx){
    for(int i = 0; i<=idx;i++){
        if(str1[i] == 'G'){
            str1[i] = 'H';
        }
        else{
            str1[i] = 'G';
        }
    }
}
int main() {
    // Please write your code here.
    cin >> n;
    cin >> str1;
    cin >> str2;
    int cnt =0;
    for(int i = n-1; i>=0; i--){
        if(str1[i] != str2[i]){
            change(i);
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}