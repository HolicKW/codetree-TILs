#include <iostream>
#include <vector>
using namespace std;
int n,m;
int arr[20];
int ans = 0;
vector<int> vec;

int sol(){
    int res = 0;
    for(int i = 0; i<vec.size(); i++){
        res = res ^ vec[i];
    }
    return res;
}
void count(int idx, int cnt){
    if(cnt == m){
        ans = max(ans,sol());
        return;
    }

    for(int i = idx; i<n;i++){
        vec.push_back(arr[i]);
        count(i+1,cnt+1);
        vec.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    count(0,0);
    cout << ans;
    return 0;
}