#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int r,c;
    cin >> r >> c;
    char arr[r][c];
    bool checked[r][c] = {0,};
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >>arr[i][j];
        }
    }

    char color = arr[0][0];
    int lo_r = 0;
    int lo_c = 0;
    int result(0);
    for(int i = 0; i<r-1; i++){
        int cnt(0);
        for(int j = 0; j<c-1; j++){
            if(arr[i][j] != color && (lo_r < i && lo_c < j)){
                if(cnt <=2){
                    cnt++;
                    lo_r = i;
                    lo_c = j;
                    color = arr[i][j];
                }
                else{
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}