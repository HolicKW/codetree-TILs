#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n , m;
    cin >> n >> m;
    int apos[1000000] = {0};
    int bpos[1000000] = {0};
    int a_time = 1;
    int b_time = 1;
    for(int i = 0; i<n; i++){
        char d;
        int t;

        cin >> d >> t;
        for(int j = 0; j<t; j++){
            if(d == 'R'){
                apos[a_time] = apos[a_time-1]+1;
            }
            else{
                apos[a_time] = apos[a_time-1]-1;
            }
            a_time++;
        }
    }

    for(int i = 0; i<m; i++){
        char d;
        int t;
        cin >> d >> t;
        for(int j = 0; j<t; j++){
            if(d == 'R'){
                bpos[b_time] = bpos[b_time-1]+1;
            }
            else{
                bpos[b_time] = bpos[b_time-1]-1;
            }
            b_time++;
        }

    }

    int ans = -1;
    for(int i = 1; i<a_time; i++){
        if(apos[i] == bpos[i]){
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;
}