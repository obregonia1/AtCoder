#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto& ai: a) {
        cin >> ai;
    }

    sort(a.begin(), a.end(), greater<int>{});

    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
             result += a[i]; 
             }
        else {
             result -= a[i]; 
             }
    }

    cout << result << endl;
}
