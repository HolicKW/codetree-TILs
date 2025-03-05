#include <iostream>
#include <utility>
using namespace std;

pair<int,int> arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        int cnt = 0;
        int count[1001] ={0,};
        for(int j = 0; j<n;j++){
            if(i==j) continue;

            for(int k = arr[j].first; k<arr[j].second;k++){
                if(count[k] == 0){
                    cnt++;
                }
                count[k]++;
            }
            
        }
        ans = max(ans,cnt);

    }

    cout << ans;
    return 0;
}