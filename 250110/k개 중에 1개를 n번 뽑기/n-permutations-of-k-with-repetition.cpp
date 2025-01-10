#include <iostream>
#include <vector>
using namespace std;

int k,n;
int cnt;
vector<int> vec;
void choose(int num){
    if(num == n){
        for(int i = 0; i<vec.size();i++){
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1;i<=k;i++){
        vec.push_back(i);
        choose(num+1);
        vec.pop_back();
    }
}
int main() {
    // Please write your code here.
    cin >> k >> n;
    choose(0);
    return 0;
}