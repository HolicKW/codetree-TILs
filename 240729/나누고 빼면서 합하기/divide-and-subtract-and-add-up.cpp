#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n>> m;
    vector<int> vec(n);
    for(int i = 0; i<n;i++){
        cin >> vec[i];
       
    }

    int result(0);

    while(m>0){
        if(m%2 ==0){
            result += vec[m-1];
            m/=2;
        }
        else{
            result += vec[m-1];
            m--;
        }
    }

    cout << result;
    return 0;
}