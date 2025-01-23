#include <iostream>
using namespace std;
int arr[4] = {0};
int count[4] ={0};
int a[101] = {0};
int b[101] = {0};
int c[101] = {0};
void clear(){
    for(int i = 0; i<4;i++){
        arr[i] = 0;
    }
}
int main() {
    // Please write your code here.
    int n;
    
    cin >> n;
    int stone = 1;
    for(int i = 0; i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 1; i<=3;i++){
        arr[i] = 1;
        for(int j = 0; j<n;j++){
            swap(arr[a[j]],arr[b[j]]);
            if(arr[c[j]]== 1){
                count[i]++;
            }
        }
        clear();
    }

    int result = 0;
    for(int i =1;i<=3; i++){
        result = max(result,count[i]);
    }

    cout << result;
    return 0;
}