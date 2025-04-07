#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 200000
#define MAX_NUM 1000000000

using namespace std;


int n, m;
int arr[MAX_N];


bool IsPossible(int dist) {// m개를 설치 할수 있는지를 판단 하는 함수
    int cnt = 1;
    int last_idx = 0;
    for(int i = 1; i < n; i++) {

        if(arr[i] - arr[last_idx] >= dist) { //거리가 dist이상 인 경우
            cnt++;              //개수를 1 늘리고 물건 위치 갱신
            last_idx = i;
        }
    }


    return cnt >= m;
}

int main() {
    // 입력
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    
    int left = 1;                          
    int right = MAX_NUM;                   
    int ans = 0;                          
    
    while (left <= right) {               
        int mid = (left + right) / 2;      
        if(IsPossible(mid)) {              
            left = mid + 1;                
            ans = max(ans, mid);          
        }
        else                               
            right = mid - 1;               
    
    }
    cout << ans;
    return 0;
}
