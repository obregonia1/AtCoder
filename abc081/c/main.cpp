#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  // vector<int> a(n, 0);
  vector<int> a(n + 1, 0);
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a[ai]++;
  }
  int count = 0;
  sort(a.begin(), a.end());
  for (auto ai : a) {
    if (ai) count++;
  }
  if (count <= k) {
    cout << 0 << endl;
    return 0;
  }

  int result = 0;
  for (auto ai : a) {
    if (ai) {
      result += ai;
      count--;
      if (count == k) cout << result << endl;
    }
  }
}
