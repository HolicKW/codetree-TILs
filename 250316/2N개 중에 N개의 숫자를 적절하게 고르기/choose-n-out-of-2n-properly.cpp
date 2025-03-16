#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int n;
int arr[20];
vector<int> a;
int ans = INT_MAX;
int ab = 0;

int calc(vector<int>& vec){
    int sum = 0;
    for(int i = 0; i<vec.size();i++){
        sum += vec[i];
    }
    return sum;
}


void sol(int cnt,int idx){
    if(cnt == n){
        ans = min(ans,abs(ab - (calc(a) * 2 )));
        return;
    }

    if(cnt>n) return;

    for(int i = idx; i<2 * n; i++){
        a.push_back(arr[i]);
        sol(cnt+1,i+1);
        a.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<2 * n;i++){
        cin >> arr[i];
        ab+=arr[i];
    }
    sol(0,0);
    cout << ans;
    return 0;
}