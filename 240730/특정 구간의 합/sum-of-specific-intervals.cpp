#include <iostream>
using namespace std;
void sm(int a,int b,int arr[]){
    int result = 0;
    for(int i = a-1; i<b;i++){
        result += arr[i];
    }

    cout << result << "\n";


}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i<m;i++){
        int a,b;
        cin >> a >> b;
        sm(a,b, arr);
    }

    return 0;
}