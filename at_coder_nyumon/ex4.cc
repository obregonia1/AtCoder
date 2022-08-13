#include <iostream>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;

    string result = "NG";

    if (b > k) {
        for (int i = 1; i * k < b; ++i) {
            if (i * k >= a && i * k <= b) {
                result = "OK";
            }
        }
    }
    
    cout << result << endl;
}
