#include <iostream>
using namespace std;
int arr[4] = {0};
void clear(){
    for(int i = 0; i<4;i++){
        arr[i] = 0;
    }
}
int main() {
    // Please write your code here.
    int n;
    int a[101];
    int b[101];
    int c[101];
    int count[4] ={0};
    cin >> n;
    int stone = 1;
    for(int i = 0; i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 1; i<=3;i++){
        arr[i] = 1;
        for(int j = 0; j<n;j++){
            swap(arr[a[i]],arr[b[i]]);
            if(arr[c[i]]== 1){
                count[i]++;
            }
        }
        clear();
    }

    int result = 0;
    for(int i =1;i<=3; i++){
        cout << count[i];
        if(count[i]>count[result]){
            result = i;
        }
    }

    cout << result;
    return 0;
}