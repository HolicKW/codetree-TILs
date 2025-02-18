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
        arr[i] = {dir,num};
    }

    sort(arr,arr+n);

    int ans = 0;
    int result = 0;
    int j = 0;
    for(int i = 0; i<n;i++){
        while(j<n && arr[j].first - arr[i].first <= 2*k){
            ans += arr[j].second;
            j++;
        }

        result = max(result,ans);

        ans -= arr[i].first;
    }

    cout << result;
    return 0;
}