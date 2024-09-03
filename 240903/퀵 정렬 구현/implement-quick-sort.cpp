#include <iostream>
#include <vector>
using namespace std;

int partition(int *arr, int low, int high){
    int pivot = arr[high];
    
    int i = low -1;

    for(int j = low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int *arr, int low, int high){
    if(low < high){
        int pivot_index = partition(arr,low,high);
        quicksort(arr,low,pivot_index-1);
        quicksort(arr,pivot_index+1,high);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i = 0; i<n;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}