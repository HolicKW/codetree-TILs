#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n,x,x2;
    int min_x2 = INT_MAX;
    int max_x1 = INT_MIN;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i<n;i++){
        cin >> x >> x2;
        if(min_x2 >= max_x1){
            max_x1 = max(max_x1,x);
            min_x2 = min(min_x2,x2);
        }
        else{
            cnt++;
        }

        
    }
    if(cnt == 1 || n-cnt == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}