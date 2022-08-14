#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto& A : a) {
        cin >> A;
    }

    int alice;
    int bob;

    sort(a.begin(), a.end(), greater<int>{});

    string player = "alice";

    for (auto& A : a) {
        if (player == "alice") {
            alice += A;
            player = "bob";
        } else {
            bob += A;
            player = "alice";
        }
    }

    cout << alice - bob << endl;
}
