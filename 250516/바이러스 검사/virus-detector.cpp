#include <iostream>
#include <algorithm>
using namespace std;

int n;
int cus[1000001];
int team1,team2;
int check(int idx){
    int r = cus[idx] - team1;
    if(r<0) return 0;
    if(r%team2 == 0){
        return r/team2;
    }
    else{
        return (r/team2)+1;
    }

}
int main() {
    // Please write your code here.

    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> cus[i];
    }
    cin >> team1 >> team2;
    long long cnt = 0;
    for(int i = 0; i<n;i++){
        cnt += (1+check(i));
    }

    cout << cnt;
    return 0;
}