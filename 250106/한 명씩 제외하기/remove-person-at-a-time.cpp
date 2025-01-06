#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    queue<int> q;
    for(int i = 1; i<=n; i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i = 1; i<k; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}