#include <iostream>
#include <vector>
using namespace std;

int n,m,t;

int arr[21][21];
int count[21][21];
int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};
bool inRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}
vector<pair<int,int>> vec;
int main() {
    // Please write your code here.
    cin >> n >> m >> t;
    for(int i =0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<m;i++){
        int r, c;
        cin >> r >> c;
        r -=1, c-=1;
        count[r][c] = 1;
    }
    for(int i = 0; i<t;i++){
        int next_count[21][21] ={0,};
        for(int j = 0; j<n;j++){
            for(int k = 0; k<n;k++){
                if(count[j][k] == 1){
                    int res = 0;
                    int r_dup = -1;
                    int c_dup = -1;
                    for(int dir = 0; dir<4;dir++){
                        int ny = j+dy[dir];
                        int nx = k+dx[dir];
                        if(inRange(nx,ny)){
                            if(arr[ny][nx] > res){
                                res = arr[ny][nx];
                                r_dup = ny;
                                c_dup = nx;
                            }
                            
                        }
                    }
                    
                    count[j][k] -= 1;
                    next_count[r_dup][c_dup] +=1;
                    

                }
            }
        }
        for(int a = 0; a<n; a++){
            for(int b = 0; b<n;b++){
                if(next_count[a][b] == 1){
                    count[a][b] = next_count[a][b];
                }
                else if(next_count[a][b] >=2){
                    count[a][b] = 0;
                }
                
            }
        }
    }

    int cnt =0;
    for(int i =0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(count[i][j] > 0){
                cnt++;
            }
            
        }
    }

    cout << cnt;
    return 0;
}