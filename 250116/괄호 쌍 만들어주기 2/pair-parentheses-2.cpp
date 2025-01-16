#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i<a.size()-1; i++){
        if(a[i] == '(' && a[i+1] == '('){
            for(int k = i+2; k<a.size()-1;k++){       
                if(a[k] == ')' && a[k+1] == ')'){
                        cnt++;
                    }
                }
            }
        }
    

    cout << cnt;
    return 0;
}