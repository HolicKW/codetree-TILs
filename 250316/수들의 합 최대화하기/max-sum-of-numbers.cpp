//행을 움직이면서 각 행별로 몇번째 열에 값을 넣을지 백트래킹 하기.
#include <iostream>
#include <vector>
#define MAX 10
using namespace std;

int arr[MAX][MAX];
bool visited[MAX];
int n;
int ans = 0;
vector<int> vec;
void sol(int row){
    if(row == n){
        int calc = 0;
        for(int i = 0; i<vec.size();i++){
            calc += arr[i][vec[i]];
        }
        ans = max(ans,calc);
        return;
    }

    for(int i = 0;i<n;i++){
        if(visited[i]) continue;
        visited[i] = true;
        vec.push_back(i);
        sol(row+1);
        visited[i] = false;
        vec.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    sol(0);
    cout << ans;
    return 0;
}