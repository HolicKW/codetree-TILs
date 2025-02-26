#include <iostream>
#include <climits>
using namespace std;
#define offset 1000

int arr[2001][2001];
int main() {
    // Please write your code here.
    int x1,x2,y1,y2;
    int a1,a2,b1,b2;
    for(int i = 0; i<2;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=offset; y1+=offset; x2+=offset; y2+=offset;
        for(int j =x1;j<x2;j++){
            for(int k = y1;k<y2;k++){
                arr[j][k] = i+1;
            }
        }
    }


    int max_x=0;
    int min_x=INT_MAX;
    int max_y=0;
    int min_y=INT_MAX;
    bool t = false;

    for(int i = 0; i<2001;i++){
        for(int j = 0; j<2001;j++){
            if(arr[i][j] == 1){
                t = true;
                max_x=max(max_x,i);
                min_x=min(min_x,i);
                max_y=max(max_y,j);
                min_y=min(min_y,j);
            }
        }
    }
    
    if(t){
        cout << (max_x-min_x+1) * (max_y-min_y+1);
    }
    else{
        cout << 0;
    }
    
    return 0;
}