#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int len = arr.size();
    
    for(int i = 0; i<len-1;i++){
        for(int j = 0; j<len-i-1; j++){
            if(arr[j]>arr[j+1]){
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i<len;i++){
        cout << arr[i] << ' ';
    }

    
    return 0;
}