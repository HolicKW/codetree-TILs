#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i){   //arr 배열에서 n까지 범위에서 max힙을 구하기
    int largest = i;
    int left = i*2;
    int right = (i*2)+1;

    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }
    if (right<=n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }


}

void heapsort(int *arr, int n){

    // max heap만들기
    for(int i = n/2; i>=1; i--){
        heapify(arr,n,i);
    }
    //heap에서 root node를 꺼내 맨 뒤와 교환
    for(int i=n;i>1; i--){
        swap(arr[1],arr[i]);
        heapify(arr,i-1,1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1; i<=n;i++){
        cin >> arr[i];
    }
    heapsort(arr,n);
    for(int i = 1; i<=n;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}