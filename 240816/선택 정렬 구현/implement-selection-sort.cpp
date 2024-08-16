#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for(int i = 0; i<n;i++){
        cin >> vec[i];
    }
    for(int i = 0; i<n;i++){
        int min = i;
        for(int j = i+1; j<n;j++){
            if(vec[min] > vec[j]){
                min = j;
            }
        }
        int tmp = vec[i];
        vec[i] = vec[min];
        vec[min] = tmp;
    }

    for(int i = 0; i<n;i++){
        cout << vec[i] << ' ';
    }
    return 0;
}