#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(),vec.end());
    cout << vec[1];
    return 0;
}