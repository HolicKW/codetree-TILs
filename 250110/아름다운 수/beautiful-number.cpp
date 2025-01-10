#include <iostream>
#include <vector>
using namespace std;
int n;
vector <int> vec;
int result = 0;
bool choose(vector<int> &vec){
    int i = 0;
    int length = vec.size();
    while(i<length){
        int number = vec[i];
        int cnt = 0;
        while(number != cnt && number == vec[i]){
            cnt++;
            i++;
        }

        if(cnt % number != 0){
            return false;
        }

    }
    return true;
    
}
void ger(int num){
    if(num == n){
        if(choose(vec)){
            result++;
        }
        return;    
    }

    for(int i = 1; i<=4; i++){
        vec.push_back(i);
        ger(num+1);
        vec.pop_back();
    }
}


int main() {
    // Please write your code here.
    cin >> n;
    ger(0);
    cout << result;
    return 0;
}