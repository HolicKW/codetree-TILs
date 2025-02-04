#include <iostream>
#include <set>
#include <climits>
using namespace std;




int main() {
    // Please write your code here
    int n;
    set<int> s;
    s.insert(0);
    cin >> n;
    int result = INT_MAX;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        auto it = s.upper_bound(num);
        if(it != s.end()){
            result = min(result,*it-num);
        }
        it--;
        result = min(result,num-*it);
        


        s.insert(num);
        cout << result << endl;
    }


    return 0;
}