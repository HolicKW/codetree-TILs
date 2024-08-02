#include <iostream>
#include <string>
using namespace std;

class dat{
    public:
        string date,weeks,weather;
        
        dat(){}
        dat(string date_c,string weeks_c, string weather_c){
            date =date_c;
            weeks = weeks_c;
            weather = weather_c;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    dat data[n];
    string rainy;
    int cnt;
    for(int i = 0; i<n;i++){
        cin >> data[i].date >> data[i].weeks >> data[i].weather;

        if(data[i].weather == "Rain"){
            if(rainy<data[i].date){
                rainy = data[i].weather;
                cnt = i;
            }
        }
    }
    cout << data[cnt].date << " ";
    cout << data[cnt].weeks << " ";
    cout << data[cnt].weather;
    return 0;
}