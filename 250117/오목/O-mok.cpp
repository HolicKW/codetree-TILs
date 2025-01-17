#include <iostream>
using namespace std;
int arr[20][20];
int win = 0;
pair<int,int>p;

bool inRange(int x, int y){
    return x>=0 && x<19 && y>=0 && y<19;
}
bool Win1(){
    for(int i = 0; i<19;i++){
        for(int j = 0; j<14;j++){
            if(arr[i][j] == 1 && arr[i][j+1] == 1&& arr[i][j+2]== 1 && arr[i][j+3] == 1 && arr[i][j+4] == 1){
                win = 1;
                p.first = i;
                p.second = j+2;
                return true;
            }
            else if(arr[i][j] == 2 && arr[i][j+1] ==2 && arr[i][j+2]== 2 && arr[i][j+3] == 2 && arr[i][j+4] == 2){
                win = 2;
                p.first = i;
                p.second = j+2;
                return true;
            }
        }
    }
    return false;
}
bool Win2(){
    for(int i = 0; i<14;i++){
        for(int j = 0; j<19;j++){
            if(arr[i][j] == 1 && arr[i+1][j] == 1&& arr[i+2][j]== 1 && arr[i+3][j] == 1 && arr[i+4][j] == 1){
                win = 1;
                p.first = i+2;
                p.second = j;
                return true;
            }
            else if(arr[i][j] == 2 && arr[i+1][j] == 2&& arr[i+2][j]== 2 && arr[i+3][j] == 2 && arr[i+4][j] == 2){
                win = 2;
                p.first = i+2;
                p.second = j;
                return true;
            }
        }
    }
    return false;
}
bool Win3(){
    for(int i = 0; i<14;i++){
        for(int j = 0; j<14;j++){
            if(arr[i][j] == 1 && arr[i+1][j+1] == 1&& arr[i+2][j+2]== 1 && arr[i+3][j+3] == 1 && arr[i+4][j+4] == 1){
                win = 1;
                p.first = i+2;
                p.second = j+2;
                return true;
            }
            else if(arr[i][j] == 2 && arr[i+1][j+1] == 2&& arr[i+2][j+2]== 2 && arr[i+3][j+3] == 2 && arr[i+4][j+4] == 2){
                win = 2;
                p.first = i+2;
                p.second = j+2;
                return true;
            }
        }
    }
    return false;
}

bool Win4(){
    for(int i = 0; i<14;i++){
        for(int j = 4; j<19;j++){
            if(arr[i][j] == 1 && arr[i+1][j-1] == 1&& arr[i+2][j-2]== 1 && arr[i+3][j-3] == 1 && arr[i+4][j-4] == 1){
                win = 1;
                p.first = i+2;
                p.second = j-2;
                return true;
            }
            else if(arr[i][j] == 2 && arr[i+1][j-1] == 2&& arr[i+2][j-2]== 2 && arr[i+3][j-3] == 2 && arr[i+4][j-4] == 2){
                win = 2;
                p.first = i+2;
                p.second = j-2;
                return true;
            }
        }
    }
    return false;
}
int main() {
    // Please write your code here.
    for(int i = 0; i<19;i++){
        for(int j = 0; j<19;j++){
            cin >> arr[i][j];
        }
    }

  
     
    if(Win1()||Win2()||Win3()||Win4()){
        cout << win << endl;
        cout << p.first+1 << ' ' << p.second+1;
        return 0;
    }
    else{
        cout << 0;
    }
        
    return 0;
}