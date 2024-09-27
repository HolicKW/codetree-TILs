#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int getCoin(int i,int j,vector<vector<int>> &arr){
    int cnt(0);
    for(int i_cnt =0; i_cnt<3;i_cnt++){
        for(int j_cnt=0; j_cnt<3;j_cnt++){
            if(arr[i+i_cnt][j+j_cnt] == 1){
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt;
    int result = 0;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0 ;i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }

    if(n == 3){
        cnt = getCoin(0,0,arr);
        result = max(result,cnt);
    }
    else{
        for(int i = 0; i<n-3; i++){
            for(int j = 0; j<n-3; j++){
                cnt = getCoin(i,j,arr);
                result = max(result,cnt);
            }
        }
    }
    cout << result;
    return 0;
}