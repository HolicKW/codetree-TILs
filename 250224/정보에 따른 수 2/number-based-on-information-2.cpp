#include <iostream>
#include <climits>
using namespace std;
char arr[1001];
int main() {
    // Please write your code here.
    int t,a,b;
    char alp;
    int num;
    cin >> t >> a >> b;
    int max_dir = 0;
    int min_dir = 0;
    for(int i =0;i<t;i++){
        cin >> alp >> num;
        arr[num] = alp;
    }
    int cnt = 0;
    for(int i = a;i<=b;i++){
        
        int s_dir = 1001;
        int n_dir = 1001;
        for(int j = 0;j<=1000;j++){
            if(arr[j] == 'S' && abs(j-i)<s_dir){
                s_dir = abs(j-i);
            }
            if(arr[j] == 'N' && abs(j-i)<n_dir){
                n_dir = abs(j-i);
            }
        }

        if(s_dir <=n_dir){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}