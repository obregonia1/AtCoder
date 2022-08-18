#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> ss(h);
    for (auto& row : ss) {
        cin >> row;
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (ss[i][j] != '.') {
                continue;
            }

            int counter = 0;
            for (int d = 0; d < 8; ++d) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if (ni < 0 || ni >= h || nj < 0 || nj >=w) {
                    continue;
                }

                if (ss[ni][nj] == '#') {
                    ++counter;
                }
            }

            ss[i][j] = '0' + counter;

        }
    }

    for (auto& row : ss) {
        cout << row << endl;

    }
}