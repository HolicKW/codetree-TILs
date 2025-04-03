#include <iostream>
#include <climits>
using namespace std;
int n;
int arr[100001];
int dis[100000];
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n-1; i++){ 
        cin >> dis[i];
    }
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    long long sum = 0;
    int min_cost = INT_MAX;
    for(int i = 0; i<n-1;i++){
        min_cost = min(min_cost,arr[i]);
        sum += min_cost * dis[i];
    }
    cout << sum;
    return 0;
}