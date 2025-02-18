#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
pair<int,int> arr[100000];
int main() {
    // Please write your code here.
    cin >> n >> k;
    for(int i =0; i<n;i++){
        int num,dir;
        cin >> num >> dir;
        arr[i] = {num,dir};
    }

    sort(arr,arr+n);

    int ans = 0;
    int result = 0;
    int j = 0;
    for(int i = 0; i<n;i++){
        while(j<n && arr[j].second - arr[i].second <= 2*k){
            ans += arr[j].first;
            j++;
        }

        result = max(result,ans);

        ans -= arr[i].first;
    }

    cout << result;
    return 0;
}