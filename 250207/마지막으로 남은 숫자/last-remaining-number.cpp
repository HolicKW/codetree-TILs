#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int num;
    for(int i = 0; i<n;i++){
        cin >> num;
        pq.push(num);
    }

    while(1){
        if(pq.empty() || pq.size() == 1){
            break;
        }
        int x,y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        if(x-y != 0){
            pq.push(x-y);
        }
        else{
            continue;
        }
    
    }

    if(pq.empty()){
        cout << -1;
    }
    else{
        cout << pq.top();
    }
    return 0;
}