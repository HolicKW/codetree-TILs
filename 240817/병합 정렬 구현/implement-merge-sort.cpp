#include <iostream>
using namespace std;

int cop_arr[100000];
int arr[100000];

void merge(int left,int right){
    int mid = (left+right)/2;
    int i = left;
    int j = mid+1;
    int k = left;
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            cop_arr[k] = arr[i];
            k++;
            i++;
        }
        else{
            cop_arr[k] = arr[j];
            k++;
            j++;
        }

    }

    if(i>mid){
        while(j<=right){
            cop_arr[k] = arr[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            cop_arr[k] = arr[i];
            k++;
            i++;
        }
    }

    for(int i = left; i<=right;i++){
        arr[i] = cop_arr[i];
    }
}

void merge_sort(int left,int right){
    int mid = (left+right)/2;
    if(left<right){
        merge_sort(left,mid);
        merge_sort(mid+1,right);
        merge(left,right);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    merge_sort(0,n-1);
    for(int i = 0; i<n;i++){
        cout<< arr[i]<< ' ';
    }

    return 0;
}