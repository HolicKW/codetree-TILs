#include <iostream>
#include <vector>
using namespace std;

int k,n;
vector<int> ans;
void print(){
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
}
void choose(int count){
    if(count == n){
        print();
        return;
    }
    for(int i = 1; i<=k;i++){
        if(count >= 2  && ans[count-1] == i && ans[count-2]== i) continue;
        ans.push_back(i);
        choose(count+1);
        ans.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> k >> n;
    choose(0);
    return 0;
}