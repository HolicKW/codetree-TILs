#include <iostream>
#include <set>
using namespace std;
pair<char,int> arr[27];
set<char> s;    // 채팅방에 있는 사람들을 저장 
int main() {
    // Please write your code here.
    int n,m,p,u;
    char c;
    int cnt = m;
    cin >> n >> m  >> p;
    for(int i = 0; i<n; i++){
        s.insert('A'+ i);   
    }
    for(int i = 0; i<m;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    if(arr[p-1].second == 0){
        return 0;   //만약 0이라면 모든 사람이 읽었다는 뜻이므로 종료
    }

    for(int i = 0; i<p-1;i++){
        if(arr[i].second == arr[p-1].second){
            if(s.find(arr[i].first) !=s.end()){
            s.erase(arr[i].first);     //확인하려는 p번째 문자와 읽은 수가 같다면 그사람은 p번째 문자를 읽었다는 뜻
            }
        }
    }
    for(int i = p-1; i<m;i++){
        if(s.find(arr[i].first) !=s.end()){
            s.erase(arr[i].first);  //p번째 문자 뒤부터는 다 p번째 문자를 본 것.
        }
    }

    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}