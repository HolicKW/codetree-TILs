#include <iostream>
using namespace std;

#define offset 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[200][200] = {0,};
    int result(0);
    for(int i = 0; i<n; i++){
        int x,y;
        cin >> x >> y;
        x +=offset;
        y +=offset;
        int xx = x+8;
        int yy = y+8;
        int lx = xx - x;
        int ly = yy - y;
        for(int j = x; j<xx; j++){
            for(int k = y; k<yy; k++){
                arr[j][k] = 1;
            }
        }
    }

    for(int i = 0; i<200; i++){
        for(int j = 0; j<200; j++){
            if(arr[i][j] == 1){
                result++;
            }
        }
    }

    cout << result;
    return 0;
}