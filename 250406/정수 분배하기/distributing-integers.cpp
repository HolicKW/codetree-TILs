#include <iostream>
using namespace std;

int n,m;
int num[10001];
bool isPossible(int target){
    int sum = 0;
    for(int i = 0; i<n;i++){
        if(target>num[i]) continue;
        sum += (num[i]/target);
    }
    if(sum >= m){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        cin >> num[i];
    }
    int left = 1;
    int right = 100000;
    int ans = 0;
    while(left<=right){
        int mid = (left+right)/2;
        if(isPossible(mid)){
            left = mid+1;
            ans = max(ans,mid);
        }
        else{
            right = mid-1;
        }

    }
    cout << ans;

    return 0;
}