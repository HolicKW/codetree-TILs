#include <iostream>
#include <vector>
#include <climits>

#define MAX 100
using namespace std;

int arr[MAX][MAX];
vector<int> vec;
int n;
int ans = 0;
bool visited[MAX];
int calc(){
    int res = 10001;
    for(int i = 0; i<vec.size(); i++){
        res = min(res,arr[i][vec[i]]);
    }

    return res;
}
void sol(int row){
    if(row == n){
        ans = max(ans,calc());
        return;
    }

    for(int i = 0; i<n;i++){
        if(visited[i]) continue;
        vec.push_back(i);
        visited[i] = true;
        sol(row+1);
        vec.pop_back();
        visited[i] = false; 
    }
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    sol(0);
    cout << ans;
    return 0;
}