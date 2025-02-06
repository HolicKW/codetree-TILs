#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i= 0;i<n;i++){
        int num;
        cin >> num;
        if(num != 0){
            pq.push(num);
        }
        else{
            if(pq.empty()){
                cout<< 0 << endl;
            }
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
    return 0;
}