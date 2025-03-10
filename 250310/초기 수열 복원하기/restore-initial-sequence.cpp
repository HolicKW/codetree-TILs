#include <iostream>
using namespace std;

int arr[1001];
int count[1001];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =0 ; i<n-1;i++){
        cin >> arr[i];
    }


    for(int i = 1; i<=n;i++){
        count[0] = i;
        int num_count[1001] ={0,};
        num_count[count[0]]++;
        bool check = false;
        for(int j = 1; j<n;j++){
            count[j] = arr[j-1] - count[j-1];
            num_count[count[j]]++;
            if(num_count[count[j]] > 1){
                break;
            }
            if(j==n-1){
                check = true;
            }
        }
        
        if(check){
            for(int j = 0; j<n;j++){
                cout << count[j]<< ' ';
            }
            return 0;
        }
    }

    
    return 0;
}