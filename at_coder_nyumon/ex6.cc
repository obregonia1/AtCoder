#include <iostream>
#include <vector>
using namespace std;

int how_many_times(int num) {
    int counter = 0;

    while (num % 2 == 0) {
        num /= 2;

        ++counter;
    }
    return counter;
}

constexpr int INF = 1 << 30;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto& A : a) {
        cin >> A;
    }

    int result = INF;

    for (auto A : a) {
        int counter = how_many_times(A);

        result = min(result, counter);
    }

    cout << result << endl;
}
