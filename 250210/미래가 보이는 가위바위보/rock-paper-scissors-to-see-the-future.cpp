#include <iostream>
#include <string>
using namespace std;
#define MAX 100000
char arr[MAX+1];
int L[MAX+1];
int R[MAX+1];
char rsp[] = "PHS";

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }

    for(int s = 0; s<3;s++){
        char shape = rsp[s];
        int Lcnt = 0;
        for(int i = 1; i<=n;i++){
            if(arr[i] == shape){
                Lcnt++;
            }

            L[i] = max(L[i],Lcnt);
        }
    }

    for(int s= 0; s<3;s++){
        char shape = rsp[s];
        int Rcnt = 0;
        for(int i = n; i>=1;i--){
            if(arr[i] == shape){
                Rcnt++;
            }

            R[i] = max(R[i],Rcnt);
        }
    }

    
    int result = 0;
    for(int i = 1; i<=n-1;i++){
        result = max(result,L[i]+R[i+1]);
    }
    cout << result;
    return 0;
}