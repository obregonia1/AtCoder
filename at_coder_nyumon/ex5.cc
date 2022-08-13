#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int result;
    
    for (int i = 1; i <= n; ++i) {
        int sum_digit = 0;
        int k = i;
        while (k > 0) {
            sum_digit += k % 10;
            k /= 10;
        }

        if (sum_digit >= a && sum_digit <= b) {
            result += i;
        }
    }

    cout << result << endl;
}
