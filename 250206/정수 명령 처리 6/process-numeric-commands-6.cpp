#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Please write your code here.
    priority_queue<int> pq;
    int n,a;
    cin >> n;
    for(int i = 0; i<n;i++){
        string command;
        cin >> command;
        if(command == "push"){
            cin >> a;
            pq.push(a);
        }
        else if(command == "pop"){
            cout << pq.top() << endl;
            pq.pop();
        }
        else if(command == "size"){
            cout << pq.size() << endl;
        }
        else if(command == "empty"){
            if(pq.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else{
            cout << pq.top() << endl;
        }
    }
    return 0;
} 