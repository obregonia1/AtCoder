#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  vector<int> v(3);
  for(auto& vi : v) cin >> vi;
  sort(v.begin(), v.end());
  int diff = v[2] * 2 - v[1] - v[0];

  if (diff % 2 == 0) cout << diff / 2 << endl;
  else cout << (diff - 1) / 2 + 2 << endl;
}

