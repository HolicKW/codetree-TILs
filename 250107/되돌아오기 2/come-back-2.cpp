#include <iostream>
#include <string>
#include <utility>
using namespace std;
int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    // Please write your code here.
    int cnt = 0;
    string s;
    cin >> s;
    int dir = 0;
    pair<int, int> p = make_pair(0,0);
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'F'){
            p.first += dx[dir];
            p.second += dy[dir];
            cnt++;
        }
        else if(s[i] =='R'){
            dir = (dir+1)%4;
            cnt++;
        }
        else if(s[i] =='L'){
            dir = (dir + 3)%4; 
            cnt++;
        }

        if(p.first == 0 && p.second == 0){
            cout << cnt;
            return 0;
        }
    }
    cout << -1;
    return 0;
}