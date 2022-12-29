#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<int, vector<int>> v;
  vector<ll> ts;
  rep(i, 0, n) {
    ll t;
    cin >> t;
    ts.push_back(t);
    int k;
    cin >> k;
    rep(j, 0, k) {
      int a;
      cin >> a;
      a--;
      v[i].push_back(a);
    }
  }

  vector<bool> need(n);
  need[n - 1] = true;
  for(int i = n - 1; i >= 0; i--) {
    if(need[i]) {
      for(int j : v[i]) need[j] = true;
    }
  }

  ll result = 0;
  rep(i, 0, n) {
    if(need[i]) {
      // cout << i << endl;
      result += ts[i];

    }
  }
  // result += ts[n - 1];
  cout << result << endl;
}

