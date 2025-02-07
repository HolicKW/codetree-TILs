#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int t,m;

int main() {
    // Please write your code here.
    cin >> t;
    for(int i = 0; i<t;i++){
        cin >> m;
        priority_queue<int> max_Heap; 
        priority_queue<int, vector<int>, greater<int>> min_Heap; 
        for(int j = 1; j<=m;j++){
            int num;
            cin >> num;
            if(j%2==1){
                max_Heap.push(num);
                if(!max_Heap.empty() && !min_Heap.empty()){
                    if(max_Heap.top() > min_Heap.top()){
                        min_Heap.push(max_Heap.top());
                        max_Heap.pop();
                        max_Heap.push(min_Heap.top());
                        min_Heap.pop();
                    }
                }
            }
            else{
                min_Heap.push(num);
            }
            if(j%2==1){
                cout << max_Heap.top() << " ";
            }
        }
        
        cout << endl;
    }
    return 0;
}