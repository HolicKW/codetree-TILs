#include <iostream>
#include <climits>
using namespace std;

int x[100];
int y[100];
int n;
int grid1(int a, int b){
    int g1 = 0, g2 = 0, g3 = 0, g4 = 0; 
    for(int i =0;i<n;i++){
        if(x[i] > a && y[i]>b){
            g1++;
        }
        else if(x[i]>a && y[i]<b){
            g2++;
        }
        else if(x[i]<a && y[i]<b){
            g3++;
        }
        else{
            g4++;
        }
    }

    return max(max(g1, g2), max(g3, g4));


}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> x[i] >> y[i];
    }
    int res = INT_MAX;
    for(int i = 2; i<=100;i+=2){
        for(int j = 2; j<=100;j+=2){
            res = min(res,grid1(i,j));
        }
    }

    cout << res;
    return 0;
}