#include <iostream>
#include <climits>
using namespace std;
int n;
long long arr[100001];
long long dis[100000];
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
    long long min_cost = arr[0];
    for(int i = 0; i<n-1;i++){
        min_cost = min(min_cost,arr[i]);
        sum += min_cost * dis[i];
    }
    cout << sum;
    return 0;

}