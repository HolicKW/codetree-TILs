#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100000
int n;
int arr[MAX];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n); 

    int i = 0, j = n - 1;
    int result = INT_MAX; 

    while (i < j) { 
        int sum = arr[i] + arr[j]; 
        result = min(result, abs(sum)); 

        if (sum == 0) { 
            cout << 0;
            return 0;
        }

        if (sum < 0) { 
            i++;
        } else { 
            j--;
        }
    }

    cout << result;
    return 0;
}
