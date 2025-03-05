#include <iostream>
#include <algorithm>
using namespace std;
pair<int,char>arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr,arr+n);
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n;j++){
            int g = 0;
            int h = 0;
            for(int k = i; k<=j;k++){
                if(arr[k].second == 'G'){
                    g++;
                }
                else{
                    h++;
                }
            }
            if(g == h || g == 0 || h == 0){
                ans = max(ans,arr[j].first - arr[i].first);
            }
        }
    }

    cout << ans;


    return 0;
}