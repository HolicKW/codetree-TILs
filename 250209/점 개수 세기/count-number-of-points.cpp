#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

set<int> s;
unordered_map<int, int> umap;

int main() {
    int n, q;
    cin >> n >> q;

    // 입력 받은 원소들을 set에 저장
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }

    // set의 원소들을 1부터 시작하는 인덱스로 매핑
    int idx = 1;
    for (int num : s) {
        umap[num] = idx++;
    }

    // 쿼리 처리
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        int cnt;
        auto it1 = s.lower_bound(a);
        auto it2 = s.upper_bound(b);
        if(it2 == s.end()){
            cnt = umap[*s.rbegin()] - umap[*it1]+1;
        }
        else{
            cnt = umap[*it2] - umap[*it1];
        }

        cout << cnt << endl;
    }

    return 0;
}
