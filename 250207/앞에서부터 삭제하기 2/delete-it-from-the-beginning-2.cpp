#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int,vector<int> ,greater<int>> pq;
int arr[100000];
int n;

void set_pq(int k){
    while(!pq.empty()){
        pq.pop();
    }
    for(int i = k; i<n;i++){
        pq.push(arr[i]);
    }
}
double get_value(int n){
    double sum = 0;
    pq.pop();
    for(int i = 0; i<n-1;i++){
        sum += pq.top();
        pq.pop();
    }
    return sum/(n-1);
}
int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    double ans = 0;
    for(int k = 1; k<=n-2;k++){
        set_pq(k);
        for(int t=0; t<k;t++){
            pq.pop();
        }

        ans = max(ans,get_value(pq.size()));
    }

    printf("%.2f",ans);
    return 0;
}