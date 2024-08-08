#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLength = 1;
    int cnt = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cnt++;
        } 
        else{
            if (cnt > maxLength) {
                maxLength = cnt;
            }
            cnt = 1;  // Reset count for a new sequence
        }
    }

    // 마지막 반복된 시퀀스를 확인
    if (cnt > maxLength) {
        maxLength = cnt;
    }

    cout << maxLength << endl;
    return 0;
}