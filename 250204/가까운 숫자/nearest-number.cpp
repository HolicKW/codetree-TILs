#include <iostream>
#include <set>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    set<int> s;
    auto it = s.begin();
    s.insert(0);
    cin >> n;
    int result = INT_MAX;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        s.insert(num);
        if(s.upper_bound(num) != s.end()){
            it = s.upper_bound(num);
            result = min(result, *it-num);
        }
        else{
            it = s.lower_bound(num);
            it--;
            result = min(result,num-*it);
        }

        cout << result << endl;
    }


    return 0;
}