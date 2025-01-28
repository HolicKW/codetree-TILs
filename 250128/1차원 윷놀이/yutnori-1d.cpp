#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,k;
int turn[12];
int arr[4];
int result = 0;
int cal(){
    int ans = 0;
    for(int i = 0; i<k;i++){
        if(arr[i] >= m-1){
            ans++;
        }
    }
    return ans;
}
void choose(int count){
    if(count == n){
        result = max(result,cal());
        return;
    }
    for(int i = 0; i<k;i++){
        arr[i] += turn[count];
        choose(count+1);
        arr[i] -= turn[count];
    }

}
int main() {
    // Please write your code here.
    cin >> n >> m >> k;
    for(int i = 0; i<n;i++){
        cin >> turn[i];
    }
    choose(0);

    cout << result;
    return 0;
}