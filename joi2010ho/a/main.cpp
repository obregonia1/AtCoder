#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> d(n - 1);
  for(auto& di : d) cin >> di;
  vector<int> h(m);
  for(auto& hi : h) cin >> hi;
  vector<long long> v(n);
  rep(i, 0, n) {
    v[i + 1] = v[i] + d[i];
  }

  long long result = 0;
  int pos = 0;
  for(auto& hi : h) {
    result += abs(v[pos + hi] - v[pos]);
    pos += hi;

  }
  cout << result % 100000 << endl;
}

