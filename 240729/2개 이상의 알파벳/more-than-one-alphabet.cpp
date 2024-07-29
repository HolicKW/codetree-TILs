#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    vector<int> vec(26,0);
    int cnt = 0;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        vec[str[i] - 'a'] +=1;
    }
    for(int i = 0; i<vec.size(); i++){
        if(vec[i] > 0){
            cnt++;  
        }
    }

    if(cnt >= 2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}