#include <iostream>
#include <string>
#include <vector>
using namespace std;
int len;
string str1,str2;
vector<int> set;
int main() {
    // Please write your code here.
    cin >> len;
    cin >> str1;
    cin >> str2;
    for(int i = 0; i<len; i++){
        if(str1[i] != str2[i]){
            set.push_back(i);
        }
    }
    int cnt = 0;
    for(int i = 0; i<set.size();i++){
        if(set[i]+1 != set[i+1]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}