#include <iostream>
using namespace std;

double arr[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i<n;i++){
        for(int j = i; j<n;j++){
            double sum = 0;
            for(int k = i; k<=j; k++){
                sum += arr[k];
                if(k==j){
                    double ans = sum / ((j-i)+1);
                    for(int l = i; l<=j; l++){
                        if(arr[l] == ans){
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}