#include <iostream>
#include <vector>
using namespace std;
vector<int> vec(8);
int k,n;
void print(){
    for(int i = 0; i<n; i++){
        cout << vec[i]<< ' ';
    }
    cout << endl;
}

void choose(int k,int cnt){
    if(cnt == k){
        print();
        return;
    }

    for(int i = 1; i<=n; i++){
        vec[cnt] = i;
        choose(k,cnt+1);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;
    choose(k,0);
    return 0;
}