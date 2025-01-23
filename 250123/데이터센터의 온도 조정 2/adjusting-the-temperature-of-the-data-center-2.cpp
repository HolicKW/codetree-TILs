#include <iostream>
#include <vector>
using namespace std;
int n,c,g,h;

int get_tmp(int n,int ta, int tb){
    if(n<ta){
        return c;
    }
    else if(n>=ta && n<=tb){
        return g;
    }
    else{
        return h;
    }

}
int main() {
    // Please write your code here.
    vector<int> a;
    vector<int> b;
    int ans = 0;
    cin >> n >> c >> g >> h;
    for(int i = 0 ;i<n;i++){
        int ta,tb;
        cin >> ta >> tb;
        a.push_back(ta);
        b.push_back(tb);
    }
    for(int i = 0; i<1000;i++){
        int sum = 0;
        for(int j = 0; j<a.size();j++){
            sum+=get_tmp(i,a[j],b[j]);
        }
        ans = max(ans,sum);
    }

    cout << ans;
    return 0;
}