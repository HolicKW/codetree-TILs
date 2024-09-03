#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int r,c;
    int result(0);
    cin >> r >> c;
    char arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >>arr[i][j];
        }
    }

    char start = arr[0][0];
    char end = arr[r-1][c-1];
    
    for(int i = 1; i<r; i++){
        for(int j = 1; j<c; j++){
            for(int k = i+1; k<r-1; k++){
                for(int l = j+1; l<c-1; l++){
                    if(arr[i][j] != start && arr[k][l] != arr[i][j] && arr[k][l] != end){
                        result++;
                    }
                }
            }
        }
    }

    cout << result;
    return 0;
}