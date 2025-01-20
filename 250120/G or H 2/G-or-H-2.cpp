#include <iostream>
#include <algorithm>
using namespace std;

char arr[101];
int n;
int max_len = 0;
int main() {
    // Please write your code here.
    cin >> n;
    int len = 0;
    for(int i = 0; i<n;i++){
        int num;
        char alp;
        cin >> num >> alp;
        arr[num] = alp;
        len = max(len,num);
    }
    int result = 0;
    int x,y;
    for(int i = 0; i<len+1;i++){
        int count_G = 0;
        int count_H = 0;
        int sum = 0;
        for(int j = i; j<len+1;j++){
            if(arr[j] == 'G'){
                count_G++;
            }
            else if (arr[j] == 'H'){
                count_H++;
            }
            if((count_G == 0 && count_H>0) || (count_G > 0 && count_H == 0) || (count_G == count_H)){
                sum = count_G+count_H;
                if((sum >= result) && (arr[i]!= 0 && arr[j]!=0)){
                    result = sum;
                    x = i;
                    y = j;
                    if(y-x>max_len){
                        max_len = y-x;
                    }
                }
            }
        }
        
    }

    cout << max_len;
    return 0;
}