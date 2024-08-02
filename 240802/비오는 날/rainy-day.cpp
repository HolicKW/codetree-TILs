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
    string rainy="9999-12-31";
    int cnt(0);
    for(int i = 0; i<n;i++){
        cin >> data[i].date >> data[i].weeks >> data[i].weather;

        if(data[i].weather == "Rain"){
            if(data[i].date < rainy){
                rainy = data[i].date;
                cnt = i;
            }
        }
    }
    cout << data[cnt].date << " ";
    cout << data[cnt].weeks << " ";
    cout << data[cnt].weather;
    return 0;
}