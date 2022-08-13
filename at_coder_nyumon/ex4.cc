#include <iostream>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;

    string result = "NG";

    for (int i = a; i <= b; ++i) {
        if (i % k == 0) {
            result = "OK";
        }
    }

    cout << result << endl;
}
