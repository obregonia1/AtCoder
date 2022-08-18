#include <iostream>

using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    int a = -1;
    int b = -1;
    int c = -1;

    for (int x = 0; x <= n; ++x) {
        for (int v = 0; v <= n; ++v) {
            for (int z = 0; z <= n; ++z) {
                if (x + v + z == n && x * 10000 + v * 5000 + z * 1000 == y) {
                    a = x;
                    b = v;
                    c = z;
                }
            }
        }
    }
    cout << a << ' ' << b << ' ' << c << endl;
}
