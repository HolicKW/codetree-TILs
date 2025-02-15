#include <iostream>
using namespace std;

#define MAX 100000

int main() {
    int arr[MAX];
    int n, s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {  // 배열을 0부터 입력받도록 수정
        cin >> arr[i];
    }

    int result = MAX + 1;  // 최소 길이를 저장할 변수
    int sum = 0, j = 0;    // `sum`과 `j`를 유지

    for (int i = 0; i < n; i++) {
        // j를 오른쪽으로 이동하며 sum을 증가
        while (j < n && sum < s) {
            sum += arr[j];
            j++;
        }

        // 조건을 만족하는 경우 최소 길이 업데이트
        if (sum >= s) {
            result = min(result, j - i);
        }

        // i를 증가시키면서 sum을 감소
        sum -= arr[i];
    }

    if (result == MAX + 1) {
        cout << -1;
    } else {
        cout << result;
    }

    return 0;
}
