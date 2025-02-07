#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;
int main() {
    // Please write your code here.
    cin >> n;
    int arr[n];
    priority_queue<int,vector<int>,greater<int>> pq;
    long result = 0;
    for(int i =0 ; i<n;i++){
        cin >> arr[i];
        pq.push(arr[i]);
        if(pq.size()<3){
            cout << -1 << endl;
        }
        else{
            int a,b,c;
            a= pq.top(); pq.pop();
            b= pq.top(); pq.pop();
            c= pq.top(); pq.pop();
            result = a*b*c;
            pq.push(a);pq.push(b);pq.push(c);
            cout << result<<endl;
        }
    }
    return 0;
}