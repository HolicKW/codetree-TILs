#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> vec(11);
int main() {
    // Please write your code here.
    int n;
    int num,dir;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> num >> dir;
        vec[num].push_back(dir);
    }
    int cnt = 0;
    for(int i = 0; i<11;i++){
        if(vec[i].size() < 2){
                continue;
        }
        for(int j = 0; j<vec[i].size()-1;j++){
            if((vec[i][j] == 1 && vec[i][j+1] == 0) || (vec[i][j] == 0 && vec[i][j+1] == 1)){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}