#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 100000
int n;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        pq.push(num);
    }
    int sum = 0;
    while(pq.size()>1){

        int lhs = pq.top();
        pq.pop();
        int rhs = pq.top();
        pq.pop();
        pq.push(lhs+rhs);
        sum += lhs+rhs;
    }
    cout << sum;

    return 0;
}