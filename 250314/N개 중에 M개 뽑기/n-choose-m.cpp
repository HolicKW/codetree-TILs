#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<int> vec;
void printvec(){
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << ' ';
    }
    cout << endl;
}
void comb(int cnt,int idx){
    if(cnt == m){
        printvec();
        return;
    }

    for(int i = idx; i<=n;i++){
        vec.push_back(i);
        comb(cnt+1,i+1);
        vec.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> n >> m;
    comb(0,1);
    return 0;
}