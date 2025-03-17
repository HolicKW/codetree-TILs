#include <iostream>
#include <vector>
#include <climits>
#define MAX 10
using namespace std;
int n;
int arr[MAX][MAX];
bool visited[MAX];
vector<int> vec;

int ans = INT_MAX;

int calc(){
    int sum = 0;
    for(int i = 0; i<vec.size();i++){
        sum += arr[i][vec[i]];
    }
    return sum;
}
void sol(int cnt){
    if(cnt == n){
        ans = min(ans,calc());
        return;
    }

    for(int i = 0; i<n;i++){
        if(visited[i] || arr[cnt][i] == 0) continue;
        visited[i] = true;
        vec.push_back(i);
        sol(cnt+1);
        vec.pop_back();
        visited[i] = false;
    }

}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    sol(0);
    cout << ans;
    return 0;
}