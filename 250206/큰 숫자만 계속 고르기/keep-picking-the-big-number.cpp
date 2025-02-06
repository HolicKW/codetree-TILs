#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        pq.push(num);
    }

    for(int i = 0; i<m;i++){
        int tmp = pq.top();
        tmp -=1;
        pq.pop();
        pq.push(tmp);
    }

    cout << pq.top();
    return 0;
}