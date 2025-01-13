#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    int a[1000001] = {0};
    int b[1000001] = {0};
    vector<int> vec;

    cin >> n >> m;
    int idx_a = 1;
    int idx_b = 1;
    for(int i = 0; i<n;i++){
        int t1;
        char d1;
        cin >> t1 >> d1;
        for(int j = 0; j<t1;j++){
            if(d1 == 'L'){
                a[idx_a] = a[idx_a-1] - 1;
                
            }
            else{
                a[idx_a] = a[idx_a-1] + 1;
                
            }
            idx_a++;
        }

    }
    for(int i = 0; i<m;i++){
        int t2;
        char d2;
        cin >> t2 >> d2;
        for(int j = 0; j<t2;j++){
            if(d2 == 'L'){
                b[idx_b] = b[idx_b-1] - 1;
               
            }
            else{
                b[idx_b] = b[idx_b-1] + 1;
                
            }
            idx_b++;
        }

    }
    int cnt = 0;
    int max_idx = max(idx_a,idx_b);

    if(idx_a>idx_b){
        for(int i = idx_b; i<max_idx;i++){
            b[i] = b[idx_b-1];
        }
    }
    else{
        for(int i = idx_a; i<max_idx;i++){
            a[i] = a[idx_a-1];
        }
    }
    


    for(int i = 1; i<max_idx;i++){
        if(a[i-1]!=b[i-1] && a[i] == b[i]){
            cnt++;
            vec.push_back(i);
        }
    }

    cout << cnt;
    return 0;
}