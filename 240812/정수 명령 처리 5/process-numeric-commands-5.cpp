#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i<n; i++){
        string com;
        cin >> com;
        if(com == "push_back"){
            int a;
            cin >> a;
            vec.push_back(a);
        }
        else if(com == "get"){
            int t;
            cin >> t;
            if(t >= 0 && t <= vec.size()){  // 인덱스 범위 확인
                cout << vec[t-1] << endl;
            }
        }
        else if(com == "pop_back"){
            if(!vec.empty()){
                vec.pop_back();
            }
        }
        else if(com == "size"){
            cout << vec.size() << endl;
        }
    }
    return 0;
}