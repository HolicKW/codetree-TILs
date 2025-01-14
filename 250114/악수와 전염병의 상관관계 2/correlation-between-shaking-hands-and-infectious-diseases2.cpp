#include <iostream>
using namespace std;

int n,k,p,t;
int inf[101];
int arr[251][2];
int main() {
    // Please write your code here.
    cin >> n >> k >> p >> t;
    inf[p] = 1;
    for(int i = 0; i<t;i++){
        int t1,x,y;
        cin >> t1 >> x >> y;
        arr[t1][0] = x;             //감염된 시간 및 악수 한 사람들 
        arr[t1][1] = y;
    }

    for(int i = 1; i<251;i++){
        if(inf[arr[i][0]] > 0 && inf[arr[i][0]] <= k){
            inf[arr[i][0]]++;
            inf[arr[i][1]]++;
        }
        else if(inf[arr[i][1]] > 0 && inf[arr[i][1]] <= k){
            inf[arr[i][0]]++;
            inf[arr[i][1]]++;
        }     
    }

    for(int i = 1; i<=n;i++){
        if(inf[i] > 0){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    return 0;
}