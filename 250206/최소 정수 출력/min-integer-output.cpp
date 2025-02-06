#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;
int main() {
    // Please write your code here.
    int n,c;
    cin >> c;
    for(int i =0; i<c;i++){
        cin >> n;
        if(n == 0){
            if(pq.empty()){
                cout << 0 << endl;
            }
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else{
            pq.push(n);
        }
    }
    return 0;
}