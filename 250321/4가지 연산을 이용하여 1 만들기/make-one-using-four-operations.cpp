#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
#include <queue>

#define MAX 2000000
using namespace std;
int n;
int arr[MAX];
int visited[MAX];
queue<int> q;

bool inRange(int x){
    return x >= 1 && x <= MAX;
}

void bfs(){
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == 1){
            cout << arr[x];
            return;
        }

        if(inRange(x-1) && !visited[x-1]){
            visited[x-1] = true;
            arr[x-1] = arr[x] + 1;
            q.push(x-1);
        }

        if(inRange(x+1) && !visited[x+1]){
            visited[x+1] = true;
            arr[x+1] = arr[x] + 1;
            q.push(x+1);
        }

        if(x%2 == 0 && inRange(x/2) && !visited[x/2]){
            visited[x/2] = true;
            arr[x/2] = arr[x] + 1;
            q.push(x/2);
        }

        if(x%3 == 0 && inRange(x/3) && !visited[x/3]){
            visited[x/3] = true;
            arr[x/3] = arr[x] + 1;
            q.push(x/3);
        }
        
        
    }
}
int main(){
    cin >> n;
    q.push(n);
    bfs();
    
}

