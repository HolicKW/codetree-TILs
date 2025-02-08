#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int n,q;
int arr[4][100001];
int sum[4][100001];
int main() {
    // Please write your code here.
    cin >> n >> q;
    for(int i = 1; i<=n;i++){
        int num;
        cin >> num;

        arr[num][i] = 1;

    }
    for(int i =1;i<=3;i++){
        for(int j =1; j<=n;j++){
            sum[i][j] = sum[i][j-1]+arr[i][j];
        }
    }

    for(int i = 0;i<q;i++){
        int a,b;
        cin >> a >> b;
        cout << sum[1][b]-sum[1][a-1] << " " << sum[2][b]-sum[2][a-1] << " " << sum[3][b]-sum[3][a-1] << endl;
    }
    return 0;
}