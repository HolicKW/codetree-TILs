#include <iostream>
using namespace std;

class tile{
    public:
        char color;
        int cnt1;
        int cnt2;

        tile(){
            cnt1 = 0;
            cnt2 = 0;
        }

};
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    tile tiles[2000];
    int loc = 1000;
    int bl = 0;
    int wh = 0;
    int gr = 0;
    for(int i = 0; i<n; i++){
        int a;
        char b;
        cin >> a >> b;
        if(b == 'L'){
            for(int j = 0; j<a; j++){
                tiles[loc].cnt1++;
                if(tiles[loc].color == 'G'){
                    break;
                }
                else{
                    if(tiles[loc].cnt1 == 2 && tiles[loc].cnt2 == 2){
                        tiles[loc].color = 'G';
                    }
                    else
                        tiles[loc].color = 'W'; 
                }
                if(j != a-1){
                    loc--;
                }
            }


        }
        else if(b == 'R'){
             for(int j = 0; j<a; j++){
                tiles[loc].cnt2++;
                if(tiles[loc].color == 'G'){
                    break;
                }
                else{
                    if(tiles[loc].cnt1 == 2 && tiles[loc].cnt2 == 2){
                        tiles[loc].color = 'G';
                    }
                    else
                        tiles[loc].color = 'B';
                }
                if(j != a-1){
                    loc++;
                }    
            }
        }
    }
    for(int i = 0; i<2000; i++){
        if(tiles[i].color == 'W'){
            wh++;
        }
        else if(tiles[i].color == 'B'){
            bl++;
        }
        else if(tiles[i].color == 'G'){
            gr++;
        }
    }
    cout << wh << ' ' << bl << ' ' << gr;

    return 0;
}