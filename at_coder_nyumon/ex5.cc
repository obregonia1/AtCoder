#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int result;
    
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        int digits = to_string(i).size(); 
        for (int k = 1; k <= digits; ++k) {
            sum += i / (10 * (k - 1)) % 10;
        }
        if (sum >= a && sum <= b) {
            result += i;
        }
        sum = 0;
    }

    cout << result << endl;
}
