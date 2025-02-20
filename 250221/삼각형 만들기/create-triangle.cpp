#include <iostream>
#include <climits>
using namespace std;

int n;
pair<int,int> arr[101];

int triangle_area(int i, int j, int k){
    int x1 = arr[i].first, y1 = arr[i].second;
    int x2 = arr[j].first, y2 = arr[j].second;
    int x3 = arr[k].first, y3 = arr[k].second;
    return abs((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3));
}

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 0; i<n;i++){
        int x,y;
        cin >> arr[i].first >> arr[i].second;

    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        for(int j =i+1;j<n;j++){
            for(int k = j+1; k<n;k++){
                if(((arr[i].first == arr[j].first) || (arr[i].first == arr[k].first) ||  (arr[j].first == arr[k].first)) &&
                ((arr[i].second == arr[j].second) || (arr[i].second == arr[k].second) ||  (arr[j].second == arr[k].second))){
                    ans = max(ans,triangle_area(i,j,k));
                }
            }
        }
    }

    cout << ans;
    return 0;
}