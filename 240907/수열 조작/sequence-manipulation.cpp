#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> deq;
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        deq.push_back(i);
    }
    while(deq.size() != 1){
        deq.pop_front();
        deq.push_back(deq.front());
        deq.pop_front();
    }

    cout << deq[0];
    return 0;
}