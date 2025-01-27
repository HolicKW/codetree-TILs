#include <iostream>
#include <string>
#include <vector>
using namespace std;
char arr[201];
string s;
int num[6];
int ans = 0;
int cal(){
    int result = num[arr[0] - 'a'];
    for(int i = 1; i<s.length()-1; i++){
        if(arr[i] == '+'){
            result += num[arr[i+1]-'a'];
        }
        else if(arr[i] == '-'){
            result -= num[arr[i+1]-'a'];
        }
        else if(arr[i] == '*'){
            result *= num[arr[i+1]-'a'];
        }
    }
    return result;
}

void choose(int count){
    if(count == 6){
        ans = max(ans,cal());
        return;
    }

    for(int i = 1; i<=4; i++){
        num[count] = i;
        choose(count+1);
    }
}
int main() {
    // Please write your code here.
    cin >> s;
    for(int i = 0; i<s.length(); i++){
        arr[i] = s[i];
    }

    choose(0);
    cout << ans;

    return 0;
}