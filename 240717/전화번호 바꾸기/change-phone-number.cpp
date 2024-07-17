#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string calling;

    cin >> calling;
    string middle = calling.substr(4,4);
    string end = calling.substr(8,5);
    cout <<"010" << end << '-'<< middle;
    return 0;
}