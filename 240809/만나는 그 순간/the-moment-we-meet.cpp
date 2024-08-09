#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int a[1000001] = {0,};
    int b[1000001] = {0,};
    int count_a(1);
    int count_b(1);
    int result = -1;
    for(int i = 0; i<n;i++){
        char dir;
        int t;
        cin >> dir >> t;
        while(1){
            if(dir == 'R'){
                if(t<=0){
                    break;
                }
                t--;
                a[count_a] = a[count_a -1]+1;
                count_a++;
            }
            else{
                if(t<=0){
                    break;
                }
                t--;
                a[count_a] = a[count_a-1]-1;
                count_a++;
            }
        }

    }
    for(int i = 0; i<m;i++){
        char dir;
        int t;
        cin >> dir >> t;
        while(1){
            if(dir == 'R'){
                if(t<=0){
                    break;
                }
                t--;
                b[count_b] = b[count_b-1]+1;
                count_b++;
            }
            else{
                if(t<=0){
                    break;
                }
                t--;
                b[count_b] = b[count_b-1]-1;
                count_b++;
            }
        }

    }
    int max = count_a > count_b ? count_a : count_b;
    for(int i = 1; i<max; i++){
        if(a[i] == b[i]){
            result = i;
            break;
        }
        
    }

    cout << result;

    return 0;
}