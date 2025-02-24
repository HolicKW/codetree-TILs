#include <iostream>
using namespace std;
int arr[11];

int main() {
    // Please write your code here.
    int x,y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i<=y; i++){
        int num_size = 0;
        int num = i;
        int arr[10] = {0,};
        while(num){
            arr[num%10]++;
            num_size++;
            num/=10;
        }
        
        for(int j = 0; j<10;j++){
            if(arr[j] == num_size-1){
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}