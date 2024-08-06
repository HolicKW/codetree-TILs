#include <iostream>
using namespace std;

class Tile {
public:
    char color;
    int white_count;
    int black_count;

    Tile() {
        color = '0'; // 초기 색상 없음
        white_count = 0;
        black_count = 0;
    }

    void paint(char new_color) {
        if (color == 'G') return; // 회색 타일은 더 이상 색상이 바뀌지 않음

        if (new_color == 'W') {
            white_count++;
        } else if (new_color == 'B') {
            black_count++;
        }

        if (white_count >= 2 && black_count >= 2) {
            color = 'G'; // 회색으로 변경
        } else {
            color = new_color; // 새로운 색상으로 변경
        }
    }
};

int main() {
    int n;
    cin >> n;
    Tile tiles[20000]; // 충분히 큰 배열 할당
    int loc = 10000; // 초기 위치는 배열의 중앙

    for (int i = 0; i < n; i++) {
        int a;
        char b;
        cin >> a >> b;
        if (b == 'L') {
            for (int j = 0; j < a; j++) {
                tiles[loc].paint('W');
                if (j != a - 1) loc--; // 마지막 칸 이동 제외
            }
        } else if (b == 'R') {
            for (int j = 0; j < a; j++) {
                tiles[loc].paint('B');
                if (j != a - 1) loc++; // 마지막 칸 이동 제외
            }
        }
    }

    int white_count = 0;
    int black_count = 0;
    int gray_count = 0;

    for (int i = 0; i < 20000; i++) {
        if (tiles[i].color == 'W') {
            white_count++;
        } else if (tiles[i].color == 'B') {
            black_count++;
        } else if (tiles[i].color == 'G') {
            gray_count++;
        }
    }

    cout << white_count << ' ' << black_count << ' ' << gray_count << endl;

    return 0;
}