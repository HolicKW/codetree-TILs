#include <iostream>
using namespace std;
#define max_r 1000001

int cmp(int a[], int b[], int len){
    int cnt(0);
    bool first = false;
    for(int i = 0; i<len-1; i++){
        if((a[i]>=b[i] && a[i+1] < b[i+1]) || (a[i]<=b[i] && a[i+1] > b[i+1])){
            if(!first){
                first = true;
            }
            else{
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int a[max_r] = {0,};
    int b[max_r] = {0,};
    int count_a = 1;
    int count_b = 1;
    for(int i =0; i<n;i++){
        int v,t;
        cin >> v >> t;
        while(t--){
            a[count_a] = a[count_a -1]+v;
            count_a++;
        }
        
    }

    for(int i =0; i<m;i++){
        int v,t;
        cin >> v >> t;
        while(t--){
            b[count_b] = b[count_b -1]+v;
            count_b++;
        }
        
    }
    
    cout << cmp(a,b,count_a);

    return 0;
}