//배열에 있는 coin 중에서 m개의 coin을 고르는 조합을 생각하자.
#include <iostream>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

#define MAX 20
#define COIN_NUM 9

using namespace std;

char arr[MAX][MAX];  // 입력을 문자로 받아야 함
vector<pair<int,int>> coin_pos;
vector<pair<int,int>> sel_pos;
int ans = INT_MAX;
int n;
int m = 3;
pair<int,int> start_pos;
pair<int,int> end_pos;

int dist(pair<int,int> a, pair<int,int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int calc() {
    int num_move = dist(start_pos, sel_pos[0]);
    for (int i = 0; i < m - 1; i++) {
        num_move += dist(sel_pos[i], sel_pos[i + 1]);
    }
    num_move += dist(sel_pos[m - 1], end_pos); 

    return num_move;
}

void dfs(int idx, int cnt) {
    if (cnt == m) {
        ans = min(ans, calc());
        return;
    }
    if(idx == coin_pos.size()) return;

    for (int i = idx; i < coin_pos.size(); i++) {
        sel_pos.push_back(coin_pos[i]);
        dfs(i + 1, cnt + 1);  
        sel_pos.pop_back();
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
                start_pos = {i, j};
            if (arr[i][j] == 'E')
                end_pos = {i, j};
        }

    for (int num = 1; num <= COIN_NUM; num++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (arr[i][j] == num + '0')
                    coin_pos.push_back({i, j});

    dfs(0, 0);

    cout << (ans == INT_MAX ? -1 : ans);
    return 0;
}
