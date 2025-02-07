#include <iostream>
#include <vector>
#include <queue>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n;
int arr[MAX_N];
int sum_val = 0;
double max_avg;
priority_queue<int,vector<int>,greater<int>> pq;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    pq.push(arr[n-1]);
    sum_val += arr[n-1];
    for(int i = n-2; i>=0; i--){
        pq.push(arr[i]);
        sum_val += arr[i];

        double avg = (double)(sum_val - pq.top()) / (n-i-1);
        if(max_avg < avg) {
            max_avg = avg;
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << max_avg;

}