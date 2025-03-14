#include <iostream>
using namespace std;
int x[101];
int y[101];
int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> x[i];
    }
    for(int i = 0; i<n; i++){
        cin >> y[i];
    }
    for(int i = 0; i<n;i++){
        int pl = 0;
        if(x[i] > y[i]){
            pl = x[i]-y[i];
            sum += pl;
        }
        x[i+1] += pl;
    }

    cout << sum;
    return 0;
}