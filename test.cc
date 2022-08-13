#include <iostream>
using namespace std;

int main() {
    int h, a;
    cin >> h >> a;
    int result = h / a;

    if (h % a == 0) {
        cout << result << endl;
    } else
        cout << result + 1 << endl;

}
