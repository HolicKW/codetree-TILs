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
    sum = arr[0] * dis[0];
    int min_cost = arr[0];
    for(int i = 1; i<n-1;i++){
        min_cost = min(min_cost,arr[i]);
        sum += (long long)min_cost * dis[i];
    }
    cout << sum;
    return 0;
}