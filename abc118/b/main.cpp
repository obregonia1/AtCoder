#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m + 1, 0);
  rep(i, 0, n) {
    int k;
    cin >> k;
    rep(j, 0, k) {
      int ai;
      cin >> ai;
      a[ai]++;
    }
  }
  int result = 0;
  for (auto ai : a) {
    if (ai == n) result++;
  }
  
  cout << result << endl;
}
