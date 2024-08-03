#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class jumsu{
    public:
        string name;
        int kor,eng,math;
        jumsu(string name_r,int kor_r,int eng_r, int math_r){
            name = name_r;
            kor = kor_r;
            eng = eng_r;
            math = math_r;
        }
        jumsu(){}
};

bool cmp(jumsu a, jumsu b){
    if(a.kor == b.kor){
        if(a.eng == b.eng){
            return a.math > b.math;
        }
        else return a.eng > b.eng;
    }
    return a.kor > b.kor;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    jumsu student[n];
    for(int i = 0; i<n;i++){
        cin >> student[i].name >> student[i].kor >> student[i].eng >> student[i].math;
    }

    sort(student,student+n,cmp);
    
    for(int i = 0; i<n;i++){
        cout << student[i].name <<" "<< student[i].kor << " "<<  student[i].eng <<" " << student[i].math << endl;
    }
    return 0;
}