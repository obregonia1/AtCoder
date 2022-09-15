#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  for (auto& mi : m) {
    cin >> mi;
  }
  sort(m.begin(), m.end());
  int rest = x;
  int result = 0;
  for (auto& mi : m) {
    if (rest >= mi) {
      rest -= mi;
      result++;
    }
  }
  while (rest >= m[0]) {
    rest -= m[0];
    result++;
  }

  cout << result << endl;
}
