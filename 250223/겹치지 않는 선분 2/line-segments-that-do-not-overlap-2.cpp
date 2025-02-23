#include <iostream>
using namespace std;

int n;
int arr[101][2];
int main() {
    // Please write your code here.
    cin >> n;
    int cnt = 0;
    for(int i =0 ;i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i =0 ;i<n;i++){
        bool isover = false;
        for(int j =0; j<n;j++){
            if(i==j) continue;

            if((arr[i][0] >= arr[j][0] && arr[i][1]<=arr[j][1]) || (arr[i][0] <= arr[j][0] && arr[i][1]>=arr[j][1])){
                isover=true;
                break;
            }

        }
        if(!isover){
            cnt++;
        }

    }
    cout << cnt;
    return 0;
}