#include <iostream>
using namespace std;

#define offset 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2000][2000] = {0,};
    int result(0);
    for(int i = 0; i<3; i++){
        int x,y,xx,yy;
        cin >> x >> y >> xx >> yy;
        x +=offset;
        y +=offset;
        xx += offset;
        yy += offset;
        int lx = xx - x;
        int ly = yy - y;
        if(i != 2){
            for(int j = x; j<xx; j++){
                for(int k = y; k<yy; k++){
                    arr[j][k] = 1;
                }
            }
        }
        else if(i == 2){
            for(int j = x; j<xx; j++){
                for(int k = y; k<yy; k++){
                    arr[j][k] = 2;
                }
            }
        }
    }

    for(int i = 0; i<2000; i++){
        for(int j = 0; j<2000; j++){
            if(arr[i][j] == 1){
                result++;
            }
        }
    }

    cout << result;
    return 0;
}