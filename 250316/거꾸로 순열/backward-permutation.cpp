#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int n;
bool visited[MAX+1];
vector<int> arr;

void answer(){
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void choose(int num){
    if(num == n+1){
        answer();
        return;
    }

    for(int i = n; i>=1; i--){
        if(visited[i]) continue;

        arr.push_back(i);
        visited[i] = true;
        choose(num+1);
        arr.pop_back();
        visited[i] = false;
    }
}
int main() {
    // Please write your code here.
    cin >> n;
    choose(1);
    return 0;
}