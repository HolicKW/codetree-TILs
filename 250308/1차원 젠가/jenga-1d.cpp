#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
int temp[101];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for(int i = 0; i<2;i++){
        int a,b;
        cin >> a >> b;
        vec.erase(vec.begin()+a-1,vec.begin()+b);
    }
    if(vec.empty()){
        cout << 0;
    }
    else{
        cout << vec.size() << endl;
        for(int i =0; i<vec.size();i++){
            cout << vec[i]<< endl;
        }
    }
    return 0;
}