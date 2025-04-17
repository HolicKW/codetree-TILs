#include <iostream>
#include <unordered_set>
#include <algorithm>

#define MAX_N 50000

using namespace std;


int n;
int a_cards[MAX_N];
int b_cards[MAX_N];

unordered_set<int> b_set;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b_cards[i];
        b_set.insert(b_cards[i]);
    }
    
   
    int card_idx = 0;
    for(int i = 1; i <= 2 * n; i++){
        if(b_set.find(i) == b_set.end())
            a_cards[card_idx++] = i;
    }

    sort(a_cards, a_cards + n);
    sort(b_cards, b_cards + n);
    

    int ans = 0;
    int b_idx = 0;
    for(int a_idx = 0; a_idx < n; a_idx++) {
        if(b_idx < n && a_cards[a_idx] > b_cards[b_idx]) {
            ans++;
            b_idx++;
        }
    }

    cout << ans;
    return 0;
}
