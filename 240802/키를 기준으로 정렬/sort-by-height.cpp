#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class height{
    public:
        string name;
        int tall,weight;

        height(string name, int tall, int weight){
            this -> name = name;
            this -> tall = tall;
            this -> weight = weight;
        }
        height(){}
};

bool cmp(height a, height b){
    return a.tall < b.tall;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    height arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i].name >> arr[i].tall >> arr[i].weight;
    }
    sort(arr,arr+n,cmp);
    for(int i = 0; i<n; i++){
        cout << arr[i].name << " " << arr[i].tall << " " << arr[i].weight << endl;
    }
    return 0;
}