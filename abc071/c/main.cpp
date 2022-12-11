#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for(auto& ai : a) cin >> ai;
  vector<ll> v;
  map<ll, int> cnt;
  rep(i, 0, n) {
    cnt[a[i]]++;
    if (cnt[a[i]] == 2) {
      cnt[a[i]] = 0;
      v.push_back(a[i]);
    }
  }
  sort(v.begin(), v.end(), greater<ll>());
  if (v.size() >= 2) cout << v[0] * v[1] << endl;
  else cout << 0 << endl;
}
