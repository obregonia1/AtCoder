#include <bits/stdc++.h>
using namespace std;
#define rep(i,a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  for (auto& li : l) cin >> li;
  int result = 0;
  rep(i, 0, n) rep(j, i + 1, n) rep(k, j + 1, n) {
    if (l[i] != l[j] && l[k] != l[j] && l[i] != l[k]) {
      if (l[i] + l[j] > l[k] && l[k] + l[j] > l[i] && l[i] + l[k] > l[j]) result++;
    }
  }
  cout << result << endl;
}
